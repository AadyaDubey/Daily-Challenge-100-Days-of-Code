// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include<stdio.h>

int main (){
    int rows,columns;
    scanf("%d %d",&rows,&columns);

    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int equal = 1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[i][j]!=arr[j][i]){
                equal--;
                break;
            }
        }
        if(!equal)
            break;
    }

    if(equal)
        printf("True\n");
    else
        printf("False\n");
    
    return 0;
}