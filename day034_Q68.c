//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include<stdio.h>

int main (){
    int size,position;

    scanf("%d",&size);
    int arr1[size],arr2[size-1];
    for(int i = 0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&position);

    for(int i=0;i<size-1;i++){
        if(i==position){
            for(int j=position;j<size-1;j++){
                arr2[j] = arr1[j+1];
            }
            break;
        }
        arr2[i] = arr1[i];
    }

    for(int i=0;i<size-1;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");

    return 0;
}