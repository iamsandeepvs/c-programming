#include<stdio.h>
#include<string.h> //include the standard string library

void main(){
     char string[200]; //define a character array to store the input string
     int vowels,consonants; //declare variable to store the vowel and consonant counts
     int index = 0; //set the index value to start reading from to zero

     printf("Enter the string: \n"); //Ask the user to enter a string
     fgets(string,200,stdin); //store the value of the string into the char array

     vowels,consonants = 0; //initialize counters to zero

     while(string[index]!= '\0'){ //repeat loop till the null terminator is encoutered
         if(string[index]>=65 && string[index]<=90 || string[index]>=97 && string[index]<=122){  //check  if the character is either upper case or lower case alphabet using ASCII values
             if(string[index]=='a' || string[index]=='e'|| string[index]=='i'|| string[index]=='o'|| string[index]=='u'|| // Check if character is a vowel
                 string[index]=='A' || string[index]=='E'|| string[index]=='I'|| string[index]=='O'|| string[index]=='U'){ 
                 vowels++; //if character is a vowel, increment the vowel counter by 1
                }
             else{
                 consonants++; //if character is a consonant,increment the consonant counter by 1
             }
         }
         index++; //increment index by 1 to go to next character
     }
     printf("The number of vowels in the sentence is %d and the number of consonants is %d \n",vowels,consonants); //print final results
}