/*
Write a program that reads 10 names up to 100 characters each and displays them in ascending alphabetical order.
*/

#include<stdio.h>
#include<string.h>

#define     SIZE   10

int main(){
    char temp[100], names[SIZE][100];
    int i,j;
    
    printf("Please enter the 10 names in the array\n");
    for(i=0;i< SIZE;i++){
        gets(names[i];)
    }

    for (i=0;i<SIZE-1;i++){
        for(j=i+1;j<SIZE;j++){
            if(strcmp(names[i],names[j])){
                strcpy(temp,names[j]);
                strcpy(names[j],names[i]);
                strcpy(names[i],temp);
            }
        }
    }

    printf("-------The names in ascending order------\n ");
    for(i=0;i<SIZE;i++){
        printf("%s",names[i]);
    }
    return 0;
}