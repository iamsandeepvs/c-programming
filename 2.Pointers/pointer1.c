/*Write a program that reads two integers, stores them in two variables, declares two pointers to them, and displays the memory addresses of both variables, the content of both pointers, as well as their memory addresses.*/

#include<stdio.h>

int main(){
    int a,b;
    int *ptr1;
    int *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("Enter two intergers\n");
    scanf("%d%d",&a,&b);

    printf("Intergers : %d, %d \n memory address of variables: %p ,%p \n memory address of pointers: %p , %p \n ", *ptr1, *ptr2,ptr1,ptr2,&ptr1,&ptr2);
    return 0;
}