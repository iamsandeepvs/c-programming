#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define     RANGE   10000

int* arrGen(int size);
void swap(int*a ,int*b);
static void quickSortHelp(int* arr,int first, int last);
void quicksort(int* arr, int len);
void printArray(int* arr, int len);

int main(int argc, char** argv){
    if(argc<2){
        printf("Need a positive integer\n");
        return EXIT_FAILURE;
    }
    int len = strtol(argv[1],NULL,10);
    int* arr = arrGen(len);
    printArray(arr,len);
    quicksort(arr,len);
    printf("Sorted array\n");
    printArray(arr,len);
    free(arr);
    return EXIT_SUCCESS;
}

int* arrGen(int size){
    if(size<0){
        printf("Array index cannot be negative\n");
        return NULL;
    }
    int* arr = (int*)malloc(size*sizeof(int));
    if(arr == NULL){
        printf("ERROR: Could not allocate memory\n");
        return NULL;
    }
    srand(time(NULL)); //set the seed
    arr[0] = rand() % RANGE;
    for(int index = 1; index<size; index++){
        arr[index] = arr[index-1]+(rand()%RANGE)+1;
    }
    return arr;
}

void printArray(int* arr, int len){
    for(int i=0; i<len; i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

static void quickSortHelp(int* arr,int first, int last){
    if(first>= last){
        return;
    }
    int pivot = arr[first];
    int low = first+1;
    int high = last;
    while(low<high){
        while((low<last)&&(arr[low]<=pivot)){
            low++
        }
        while((first<high)&&(arr[high]>pivot)){
            high--;
        }
        if(low<high){
            swap(&arr[low], &arr[high]);
        }
    }
    if(pivot>arr[high]){
        swap(&arr[first],&arr[high]);
    }
    quickSortHelp(arr,first,high-1);
    quickSortHelp(arr,low,last);
}

void quicksort(int* arr, int len){
    quickSortHelp(arr,0,len-1);
}

void swap(int*a ,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

