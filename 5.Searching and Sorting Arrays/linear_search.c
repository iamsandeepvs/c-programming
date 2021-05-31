/*
 Write a function that searches for a number in an array of doubles. If the number is stored, the function should return the number of its occurrences and the position of its first occurrence, otherwise −1. Write a program that reads up to 100 doubles and stores them in an array. If the user enters −1, the insertion of numbers should terminate. Then, the program should read a double and use the function to display the number of its occurrences and the position of its first occurrence.
*/

#include <stdio.h>

int linear_search(double array[100],int num_elements,double num, int *t );


int main ()
{
  double array[100],num;
  int num_elements,times,position;
  printf("Enter the element of the array:");
  for(num_elements=0;num_elements<100;num_elements++){
      scanf("%lf",&num);
      if(num==-1){
          break;
      }
      array[num_elements] = num;
  }
  
  printf("Enter the number to search: ");
  scanf("%lf",&num);
  printf("\n");
  
  position = linear_search(array,num_elements,num,&times);
  
  if(position == -1)
  printf("The number %lf does not appear in the array",num);
  else
  printf("The number %lf appears in the array %d times and the first position is %d",num,times,position);
  
  return 0;
}

int linear_search(double array[100],int num_elements,double num, int *t ){
    int pos = -1;
    int i = 0;
    *t = 0;
    
    for(i=0;i<num_elements;i++){
       if (array[i]==num){
            (*t)++;
            if(pos == -1){
                pos = i;
            }
       } 
    }
    
    return pos;
}
