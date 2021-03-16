#include<stdio.h>

int hcf(int a, int b); //Function prototype for the hcf function

void main(){
  
  int x,y,m; //declare 3 variables 

  printf("Enter the two numbers\n"); //Prompt user to input two numbers
  scanf("%d %d",&x,&y);

  m = hcf(x,y); //call the hcf function and save the return value in m
  printf("The highest common divisor of %d and %d is %d\n",x,y,m); //Print the results
}

/*
 The fucntion takes in two integer variables and returns an integer
 */
int hcf(int a,int b){
    
    int g; //declare a variable to store the remainder from modulo function
    g = a%b; //divide the values and save the remainder in g
     if (g==0) //if remainder is zero then b is the highest common divisor
        return b;
    else
        g =hcf(b,g); //else pass the values of b and remainder into hcf function again
}