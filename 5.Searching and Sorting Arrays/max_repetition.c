/*
Write a function that takes as parameter an integer array and returns the maximum number of the same occurrences. For example, if the array is {1, 9, −3, 5, −3, 8}, the function should return 2 because −3 appears the most times, that is, 2. Write a program that reads 10 integers, stores them in an array, and uses the function to display the maximum number of the same occurrences.
*/

#include <stdio.h>

#define SIZE 10

int max_repition(int arr[SIZE]);


int main ()
{
  int array[SIZE],num_elements,max_num;
  
  printf("Enter the 10 elements of the array:");
  for(num_elements=0;num_elements<SIZE;num_elements++){
      scanf("%d",&array[num_elements]);
  }

  max_num = max_repition(array);
  
  if(max_num == 1)
  printf("No number is repeating more than once in the array");
  else
  printf("The maximum number of repetition is %d",max_num);
  return 0;
}

int max_repition(int arr[SIZE]){
    int i,j,temp_count;
    int max_count = 0;
    
    for(i=0;i<SIZE;i++){
        temp_count = 0;
       for(j=i;j<SIZE;j++){
           if(arr[i]==arr[j]){
               temp_count++;
           }
       }   
       if(temp_count>max_count){
           max_count = temp_count;
       }
    }
    return max_count;
}