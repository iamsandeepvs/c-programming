/*
Write a program that reads an integer within [0, 1000] and uses the binary search algorithm to "guess" that number. The program should make questions to determine if the number we are searching for is less or more than the middle of the examined interval. The answers must be given in the form of 0 (no) or 1 (yes). The program should display how many tries were needed to find the number.
*/

#include <stdio.h>

int main(){
 
 int x,ans,low,high,middle,times;

 printf("Please enter a number between 0 and 1000\n");
 scanf("%d",&x);
 if(x<0||x>1000){
     printf("The entered number is out of range,please try again!\n");
     return -1;
 }
low = 0;
high = 1000;
times = 1;

while(low<=high){
    middle = (low+high)/2;
    printf("Is the number you guessed %d : NO='0'  YES='1'\n",middle);
    scanf("%d",&ans);
    if(ans == 1){
        break;
    }
    times++;
    printf("Is the number you guessed lesser than %d : '0' = NO '1' = YES\n",middle);
    scanf("%d",&ans);
    if (ans==1){
       high = middle-1;
    }
    else{
        low = middle+1;
    }
}

printf("The answer was found in %d tries\n",times);
return 0;
}