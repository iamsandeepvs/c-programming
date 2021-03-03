#include <stdio.h>

# define MAX 100

int main(){

    int p[MAX][MAX];
    int r,c;
    int i,j;
    int counter;

    printf("Enter the size of the Matrix\n");
    scanf("%d %d",&r,&c);

    printf("Enter the elements of the Matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&p[i][j]);
            if(p[i][j]==0) ++counter;
        }
    }

    if(counter>(r*c/2))
    printf("Matrix is sparse\n");
    else
    printf("Matrix is not sparse\n");
    printf("There are %d zeroes in the Matrix\n",counter);
}