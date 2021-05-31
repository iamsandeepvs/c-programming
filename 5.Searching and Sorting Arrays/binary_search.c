/*
Write a function that searches for a number in an array of integers. If the number is stored, the function should return the position of its first occurrence, otherwise −1. Write a program that declares an array of integers sorted in ascending order. The program should read an integer and use the function to display its array position.
*/

#include <stdio.h>

int binary_search(int arr[],int num, int size);


int main ()
{
  int array[] = {10,20,30,40,50,60,70};
  int position,search_num;
  
  printf("Enter the number to search:");
  scanf("%d",&search_num);

  position = binary_search(array,search_num,sizeof(array)/sizeof(int));
  
  if(position == -1)
  printf("The number is not in the array");
  else
  printf("The first occurrence of number %d is %d",search_num,position);
  return 0;
}

int binary_search(int arr[],int num, int size){
    int start,middle,end;
    start = 0;
    end = size-1;
    
    while(start<=end){
        middle = (start+end)/2;
        if(num<arr[middle]){
            end = middle -1;
        }
        else if(num>arr[middle]){
            start = middle+1;
        }
        else
        return middle;
    }
    return -1;
}