/*
Write a function that takes as parameters an array of doubles and uses the selection sort algorithm to sort it in ascending order. Write a program that reads 10 doubles, stores them in an array, and uses the function to sort it.
*/

#include <stdio.h>

#define SIZE    10

void sel_sort(double array[],int size);

int main(){
    double arr[SIZE];
    int size,i;
    printf("Please enter the 10 numbers in the array\n");
    for(i=0;i<SIZE;i++){
        scanf("%lf",&arr[i]);
    }

    sel_sort(arr,SIZE);

    printf("------The sorted array-------\n");
    for(i=0;i<SIZE;i++){
        printf("%f\n",arr[i]);
}
return 0;
}

void sel_sort(double array[],int size){
    double temp;
    int i,j;

    for(i=0;i<SIZE-1;i++){
        for(j=i+1;j<SIZE;j++){
            if(array[j]<array[i]){
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}