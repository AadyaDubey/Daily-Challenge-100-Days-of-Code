// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include<stdio.h>

int main (){
    int rows,columns,sum=0;
    scanf("%d %d",&rows,&columns);

    int arr [rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&arr[i][j]);
            if(i==j){
                sum += arr[i][j];
            }
        }
    }

    printf("\n%d\n",sum);
    return 0;
}