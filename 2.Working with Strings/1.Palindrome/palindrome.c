#include<stdio.h>
#include<string.h>   //Include the string library for string operations


void main(){
char string[100], reverse[100]; //Define two strings of size 100
int i;
int x = 0; //Variable to store the index of reversed string

printf("Enter the string\n");   //Take input from user
scanf("%s",string);

int n = strlen(string);  //Find the length of the entered string using standard string library function
printf("The length of the entered string is %d\n",n); 

// Enter the reversed string into the array 'reverse'
for(i=n-1; i>=0; i--){
 reverse[x] = string[i];
x++;
}
reverse[x] = '\0'; //  Terminate the reversed string with a null character

//Conpare the two strings using the standard string library function 'strcmp'. The function retuns 0 if both strings are equal
if (strcmp(string,reverse)==0){
    printf("The entered string is a palindrome\n"); // Print result
}
}