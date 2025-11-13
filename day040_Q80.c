// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include<stdio.h>

int main (){
    int row1,row2,column1,column2;
    scanf("%d %d",&row1,&column1);
    int arr1[row1][column1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    scanf("%d %d",&row2,&column2);
    int arr2[row2][column2],multiply[row1][column2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            multiply[i][j] = 0;
            for(int k=0;k<column1;k++){
                multiply[i][j] += arr1[i][k]*arr2[k][j];
            }
            printf("%d ",multiply[i][j]);
        }
        printf("\n");
    }

    return 0;
}