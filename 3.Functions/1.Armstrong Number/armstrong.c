#include<stdio.h>
#include<math.h>

#define max 10

int top = -1;
int stack[max];
void push(int);
int pop();
int isArmstrong(int);

void main(){
    int number;

    printf("Enter a number:\n");
    scanf("%d",&number);

    if(isArmstrong(number)){
        printf("The number %d is an Armstrong number\n",number);
    }
    else{
        printf("The number %d is not an Armstrong number\n",number);
    }
}

int isArmstrong(int num){
     int temp, remainder, count, a, value;
     temp = num;
     count =0;
     value = 0;

     while(num >0){
         remainder = num%10;
         push(remainder);
         count++;
         num = num/10;
     }
    
    num = temp;
    
    while(top>=0){
        a = pop();
        value = value+pow(a,count);
    }

    if (num ==value) return 1;
    else return 0;
}

void push(int x){
    top++;
    stack[top] = x;
}

int pop(){
    int y;
    if(top==-1) return top;
    else{
        y = stack[top];
        top--;
        return y;
    }
}