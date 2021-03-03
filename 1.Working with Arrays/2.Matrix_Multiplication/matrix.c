#include <stdio.h>

int main(){

    int matrixA[2][3];
    int matrixB[3][2]; 
    int result[2][2];

    printf("Enter the elements of first 2X3 matrix\n");
    for(int i =0 ; i<2;i++){
        for(int j =0;j<3;j++){
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("Enter the elements of second 3X2 matrix\n");
    for(int i =0 ; i<3;i++){
        for(int j =0;j<2;j++){
            scanf("%d",&matrixB[i][j]);
        }
    }
    for(int i =0; i<2;i++){
        for(int j=0; j<2;j++){
            result[i][j]=0;
            for(int k=0;k<3;k++){
                result[i][j] = result[i][j] + matrixA[i][k]*matrixB[k][j];
            }
        }
    }
    printf("Resulting matrix is\n");
        for(int i =0 ; i<2;i++){
        for(int j =0;j<2;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
 
    return 0;

}