// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include<stdio.h>

int main (){
    int rows1,rows2,columns1,columns2;

    scanf("%d %d",&rows1,&columns1);
    int arr1[rows1][columns1];
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    scanf("%d %d",&rows2,&columns2);
    int arr2[rows2][columns2],sum[rows1][columns1];
    for(int i=0;i<rows2;i++){
        for(int j=0;j<columns2;j++){
            scanf("%d",&arr2[i][j]);
            sum[i][j] = arr1[i][j]+arr2[i][j];
        }
    }

    printf("\n");
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}