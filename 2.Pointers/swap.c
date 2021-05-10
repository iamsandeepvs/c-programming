/*Write a program that uses two pointers to read two integers and swap their values.*/

#include<stdio.h>

int main(){
    int a, b, *ptr1,*ptr2,tmp;
    ptr1 = &a;
    ptr2 = &b;
    
    printf("Enter two variables\n");
    scanf("%d%d",ptr1,ptr2);
    printf("Entered values are: a=%d b=%d\n",*ptr1,*ptr2);

    tmp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = tmp;

    printf("The swapped values are :a=%d b=%d \n",*ptr1,*ptr2);
    return 0;
}