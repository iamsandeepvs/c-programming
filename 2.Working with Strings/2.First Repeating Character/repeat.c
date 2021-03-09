#include<stdio.h>
#include<string.h>

int ifexists(char c,char temp[],int z){
    int k;
    for(k=0;k<z;k++){
        if(temp[k]==c) return 1;
    }
    return 0;
}

void main(){
     
     char string1[30],string2[30];
     int n,i,x;

     printf("Enter the string\n");
     scanf("%s",string1);

     n= strlen(string1);
     string2[0]=string1[0];
     x = 1;
     for (i=1;i<n;i++){
         if(ifexists(string1[i],string2,x))
         {
             printf("The first repeating letter in %s is %c\n",string1,string1[i]);
             break;
         }
         else{
            string2[x]=string1[i];
            x++;
         }
     }
     if(i==n){
         printf("There are no repeating characters\n");
     }
    
}