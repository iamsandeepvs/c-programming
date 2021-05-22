/*Write a program that reads a string of up to 100 characters, copies it in a second string variable after replacing each single 'a' with a double 'a', and displays the second string.*/

#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[100];
  char str2[200];
  int len,i,j=0;
  printf("Enter the string: \n");
  gets(str1);
  printf("The entered string is: %s\n",str1);
  len = strlen(str1);
  for(i=0;i<len;i++){
      str2[j] = str1[i];
      if(str1[i]=='a'){
          j++;
          str2[j] = 'a';
      }
      j++;
  }
  str2[j] = '\0';
  printf("The copied string is: %s",str2);
  return 0;
}