// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include<stdio.h>

int main (){
    int size,shift;
    scanf("%d",&size);
    int arr1[size],arr2[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&shift);

    for(int i=0;i<size;i++){
        arr2[(i+shift)%size]=arr1[i];
    }

    for(int i=0;i<size;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}