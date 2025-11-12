// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include<stdio.h>

int main (){
    int rows,columns;
    scanf("%d %d",&rows,&columns);
    int arr[rows][columns],sum[rows];

    for(int i=0;i<rows;i++){
        sum[i]=0;
        for(int j=0;j<columns;j++){
            scanf("%d",&arr[i][j]);
            sum[i]+=arr[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        printf("%d ",sum[i]);
    }
    printf("\n");
    return 0;
}