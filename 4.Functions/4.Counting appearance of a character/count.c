#include <stdio.h>
#include <string.h>

int char_counter(char str[], char ch);

int main ()
{
  char str[100],ch;
  int count;
  
  while(1){
   printf("\nPlease enter the string:");
   gets(str);
   printf("\nPlease enter the character to check:");
   scanf("%c",&ch);
   
   if(strcmp(str,"end")==0){
       break;
   }
   printf("The character %c appears %d times in the string %s",ch,char_counter(str,ch),str);
   getchar();
  }
  return 0;
}

int char_counter(char str[], char ch){
    int i,count=0;
    for(i=0; str[i]!='\0';i++){
        if(str[i] == ch){
            count++;
        }
    }
    return count;
} 