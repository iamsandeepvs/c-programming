#include<stdio.h>
#include<stdlib.h>

int sumOfRange(int);

int main(){
    int limit;
    int sum = 0;
    printf("Enter the range for which sum is to be calculated :\n");
    scanf("%d",&limit);\
    printf("The sume of integers from 0 to %d is %d \n",limit,sumOfRange(limit));
    return 0;
}


int sumOfRange(int n){
    int sum = n;
    if(n == 0)
        return 0;
    return sum + sumOfRange(n-1);
}
