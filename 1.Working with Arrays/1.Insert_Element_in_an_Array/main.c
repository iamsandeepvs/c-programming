#include<stdio.h>


#define MAX 100
int Array[MAX];

int main(){

int size;
int position;
int value;

printf("Enter the size of the Array\n");
scanf("%d",&size);
for(int i=0;i<size;i++){
    printf("Enter element %d of Array\t",i+1);
    scanf("%d",&Array[i]);
}
printf("Enter the position and element to insert\t");
scanf ("%d %d",&position,&value);
for(int j= size-1;j>=position-1;j--){
 Array[j+1]= Array[j];
}
Array[position-1] = value;
printf("The modified Array is\n");
for(int k=0;k<=size;k++){
printf("%d\t",Array[k]);
}
return 0;
}