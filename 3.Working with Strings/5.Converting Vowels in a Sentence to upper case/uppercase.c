#include<stdio.h>
#include<string.h> 

void main(){
    char string[200]; //Declare a char array of size 200 to store the input string
    int index =0; //set the initial index value to 0

    printf("Enter the string:\n"); //Ask the user to enter a string
    fgets(string,200,stdin); //store the input string to the char array

    while(string[index]!='\0'){ 
        if(string[index]=='a' || string[index]=='e' ||string[index]=='i' || string[index]=='o' || string[index]=='u'){ //Check if the charcter is a lower case vowel
            string[index] = string[index]-32; //subtract 32 from the ASCII value of the letter to convert it to upper case
        }
        index++; //increment the index to check the next value
    }
    printf("The string after converting all the vowels to uppercase is :\n"); //Print result to console
    puts(string);
}