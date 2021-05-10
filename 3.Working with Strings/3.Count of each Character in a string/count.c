#include<stdio.h>
#include<string.h> //Include string library

/*
The function checks if a given character from the input string exists in the duplicate string. If the character exists in the array the count at that index is increased by 1
else the character is added to the duplicate array at the next index location and the count of that location is set to 1.
*/

int ifexists(char c,char temp[],int cnt[],int z){
    int i;
    for(i=0;i<z;i++){
        if (temp[i]==c){
            cnt[i]++;
            return 1;
        }
    }
    return 0;
}

void main(){
    char string[100],cmp[100]; //Define two char arrays of size 100
    int count[100]; //define an array to store the count of each character
    int x,n,i;

    printf("Enter the string\n"); //Ask the user to input a string
    scanf("%s",string); //store the entered string to string array

    n= strlen(string);  //find the length of the entered string using strlen function

    cmp[0] = string[0]; //Set the initial value of the duplicate string to the value of entered string
    x=1;
    count[0]=0; //set initial count to zero

  /*
  for each character in the entered string find out if it exists in the second array, if not add it to the second array and increment counter by 1. 
  if the character exists,then increment the count at that index by 1
  */
    for(i=0;i<n;i++){  
        if(!ifexists(string[i],cmp,count,x)){
            cmp[x]=string[i];
            count[x]=1;
            x++;
        }
    }
//Print the results in appropriate format
    printf("The count of each character in the string %s is\n",string);
    for(i=0;i<x;i++){
        printf("%c\t%d\n",cmp[i],count[i]);
    }
}