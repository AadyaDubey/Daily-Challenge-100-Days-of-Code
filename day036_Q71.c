// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include<stdio.h>

int main (){
    int rows,columns;
    char enter;
    scanf("%d %d",&rows,&columns);
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&arr[i][j]);
        }
        scanf("%c",&enter);
    }

    printf("\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}