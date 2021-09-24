#include<stdio.h>

int findGCD(int a, int b);

int main(){
    int num1 = 0, num2 = 0, gcd = 0;

    printf("Input first number\n");
    scanf("%d",&num1);
    printf("Input second number\n");
    scanf("%d",&num2);

    gcd = findGCD(num1,num2);
    printf("GCD of %d and %d is %d\n",num1,num2,gcd);
    return 0;
}

int findGCD(int a,int b){
    while(a!=b){
        if(a>b)
            return findGCD(a-b,b);
        else
            return findGCD(a,b-a);
    }
    return a;
}
