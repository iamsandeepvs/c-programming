#include<stdio.h>

#define SIZE 10

int main(){

    int *ptr, arr[SIZE],i;

    ptr = arr;
    printf("Enter 10 numbers\n");
    for(i=0;i<SIZE;i++){ 
        scanf("%d",ptr+i);
    }
    printf("Reversed array is :");
    for(i=SIZE-1;i>=0;i--){
        printf("%d",*(ptr+i));
    }
    return 0;
}