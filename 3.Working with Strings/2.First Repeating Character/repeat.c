#include<stdio.h>
#include<string.h> //include string library

/*Function to check if the charcter in string1 is already present in string 2
The function takes a char variable, a char array and an integer*/
int ifexists(char c,char temp[],int z){
    int k;
    for(k=0;k<z;k++){
        if(temp[k]==c) return 1;
    }
    return 0;
}

void main(){
     
     char string1[30],string2[30]; //Define two strings. sting1 will hold the input string and string2 will be used to check for repetition
     int n,i,x; 

     printf("Enter the string\n"); //Ask user to input a string
     scanf("%s",string1); //store the value in string1 variable

     n= strlen(string1); //store the length of entered string in variable n
     string2[0]=string1[0]; // assign the first character of string1 to string2
     x = 1;

     /*Compare each of the characters in string1 to all the characters in string2*/
     for (i=1;i<n;i++){
         if(ifexists(string1[i],string2,x)) //If a retpeating character is found, the function returns 1 and the if loop is executed
         {
             printf("The first repeating letter in %s is %c\n",string1,string1[i]); //Print the repeating character
             break;
         }
         else{
            string2[x]=string1[i]; //if the character in  string1 is not in string2, add the character to string2
            x++;
         }
     }
     if(i==n){
         printf("There are no repeating characters\n");
     }
    
}