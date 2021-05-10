#include<stdio.h>

#define MAX  100

int* maxmin(int arr[],int v); //Declaring prototype for the maxmin function

void main(){
    int array[MAX];  //declare an array to hold the user input
    int i,length;
    int *p;  //declare an integer pointer p that points to the array returned by our maxmin function

    printf("Enter the number of elements in the array\n"); //Ask the user to input the desired array
    scanf("%d",&length);
    printf("Enter the elements of the array\n");
    for(i=0;i<length;i++){
        scanf("%d",&array[i]);
    }
    p=maxmin(array,length); //call the function
    //Print final results
    printf("The smallest element in the array is %d\n",*p); 
    printf("The largest element in the array is %d\n",*(p+1));
}

/*
The function to find the maximum and minimum values in the array takes in two parameters
1.The array entered by the user
2.The size of the array
Retuns an interger pointer that points to the first element of the array
*/

int* maxmin(int arr[],int v){
int k;
static int mm[2]; 
mm[0]=arr[0]; //initialize the value at first index position to arr[0]
mm[1]=arr[0]; //initialize the value at second index position to arr[1]
for(k=0;k<v;k++){
    if(mm[0]>arr[k]) //If value at any position is less than mm[0],save that value to mm[0]
        mm[0]=arr[k];
    if(mm[1]<arr[k]) //If the value at any position is greater than mm[1],save that value to mm[1]
        mm[1]=arr[k];    
}
return mm; //return the array storing the results
}
