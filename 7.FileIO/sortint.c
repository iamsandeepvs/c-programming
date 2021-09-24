/*
This program reads integers from a ﬁle, sorts them, and stores the sorted integers into another ﬁle.
*/

#include<stdio.h>
#include<stdlib.h>

int comparefunc(const void* arg1, const void* arg2){
    const int* ptr1 = (const int*)arg1;
    const int* ptr2 = (const int*)arg2;
    //Get values from address
    const int val1 = *ptr1;
    const int val2 = *ptr2;
    if(val1 < val2) return -1;
    if(val1== val2) return 0;
    return 1;
}

int main(int argc, char* argv[]){
    //We need 2 file names
    if(argc < 3){
        printf("ERROR: Need an input and output file name\n");
        return EXIT_FAILURE;
    }

    // open the input file
    FILE *iptr;
    iptr = fopen(argv[1],"r");
    if(iptr == NULL){
        printf("ERROR: Could not open file for reading\n");
        return EXIT_FAILURE;
    }
    int count = 0;
    int val;
    while(fscanf(iptr,"%d",&val)==1){
        count++;
    }

    //Allocate array to store the scanned values
    int* arr;
    arr = (int*)malloc(count*sizeof(int));
    if (arr==NULL){
        printf("ERROR: Could not allocate memory\n");
        return EXIT_FAILURE;    
     }

     //go to the beginning of the file
     fseek(iptr,0,SEEK_SET);
     int index = 0;
     while(fscanf(iptr,"%d",&val)==1){
         arr[index] = val;
         index++;
     }

     //Sort the array
    qsort(&arr[0],count,sizeof(int),comparefunc);
    fclose(iptr);

    //Open output file
    FILE *optr;
    optr = fopen(argv[2],"w");
    if(optr==NULL){
        printf("ERROR: Could not open file for writing\n");
        return EXIT_FAILURE;
    }

    for(index=0;index<count; index++){
        fprintf(optr,"%d\n",arr[ind]);
    }

    //Close output file
    fclose(optr);
    //release arr memory
    free(arr);
    return EXIT_SUCCESS;
}