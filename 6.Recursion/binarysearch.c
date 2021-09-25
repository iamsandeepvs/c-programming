#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define RANGE   100

int* arrGen(int size);
static int binarySearchHelp(int *arr,int low,int high,int key);
int binarySearch(int *arr,int len,int key);
void printArray(int *arr,int len);

int main(int argc, char **argv){
    if(argc<2){
        printf("Need length of the array\n");
        return EXIT_FAILURE;
    }
    int len = (int)strtol(argv[1],NULL,10);
    int *arr = arrGen(len);
    printArray(arr,len);
    int count;
    for(count = 0; count<10; count++){
        int key;
        if((count % 2)==0){
            key = arr[rand()%len];
        }
        else{
            key = rand()%100000;
        }
        printf("Searching for %d: result = %d\n",key,binarySearch(arr,len,key));
    }
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

static int binarySearchHelp(int *arr,int low,int high,int key){
    int mid = (low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        return binarySearchHelp(arr,low,mid-1,key);
    }
    return binarySearchHelp(arr,mid+1,high,key);
}

int binarySearch(int *arr,int len,int key){
    return binarySearchHelp(arr,0,len-1,key);
}

void printArray(int* arr, int len){
    for(int i=0; i<len; i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}