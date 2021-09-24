/*
This program detects and counts the occurrences of the word in an input ﬁle. If a line in the input ﬁle includes the word, the program writes that line to the output ﬁle. After checking all lines in the input ﬁle, the program writes the total count to the output ﬁle
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define     LINE_LEN     81

int main(int argc, char* argv[]){
    if(argc<4){
        printf("ERROR: Need 3 arguments: I/P file, O/P file, string to search for\n");
        return EXIT_FAILURE;
    }

    //Open the file to read
    FILE* iptr;
    iptr = fopen(argv[1],"r");
    if(iptr == NULL){
        printf("ERROR: Could not open file for reading\n");
        return EXIT_FAILURE;
    }

    //Open output file
    FILE* optr;
    optr = fopen(argv[2],"w");
    if(optr == NULL){
        printf("ERROR: Could not open file for writting\n");
        fclose(iptr);
        return EXIT_FAILURE;
    }
    
    int count = 0;
    char oneline[LINE_LEN];
    while(fgets(oneline,LINE_LEN,iptr) != NULL){
        if(strstr(oneline,argv[3]) != NULL){
            fprintf(optr,"%s\n",oneline);
        }
        char* chptr = oneline;
        while(chptr != NULL){
            if(strstr(chptr,argv[3]) != NULL){
                count ++;
                chptr += strlen(argv[3]);
            }
        }
    }
    //Write count to file
    fprintf(optr,"Number of occurence is: %d\n",count);
    
    //Close files
    fclose(iptr);
    fclose(optr);
    return EXIT_SUCCESS;
}