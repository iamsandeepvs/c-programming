/*
Write the add_sort() function that inserts a number into a sorted array, so that the array remains sorted. Write a program that reads 9 integers, stores them in an array of 10 integers, and uses the sel_sort() of the previous exercise to sort the array in ascending order. Then, the program should read the 10th integer and use the add_sort() to insert it in the array.
*/

#include<stdio.h>

#define     SIZE   10

void sel_sort(int arr[],int size);
void add_sort(int arr[],int element,int size);

int main(){
    int array[SIZE],insertion,i;

    printf("Please enter the first 9 integers of the array\n");
    for(i=0;i<SIZE-1;i++){
        scanf("%d",&array[i]);
    }

    sel_sort(array,SIZE);

    printf("Please enter the element to insert into the array\n");
    scanf("%d",&insertion);

    add_sort(array,insertion,SIZE);

    printf("The array after the insertion is \n");
    for(i=0;i<SIZE;i++){
        printf("%d\t",array[i]);
    }
    return 0;
}

void sel_sort(int arr[],int size){
    int temp,i,j;

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void add_sort(int arr[],int element, int size){

    int i,pos;

    if(element<=arr[0]){
        pos= 0;
    }
    else if(element>= arr[size-2]){
        arr[size-1]= element;
        return;
    }
    else{
        for(i=0;i<size-2;i++){
            if(element>=arr[i] && element<=arr[i+1]){
                break;
            }
        }
        pos = i+1;
    }
    
    for(i=size-1;i>pos;i--){
        arr[i]=arr[i-1];
    }

    arr[pos] = element;
}