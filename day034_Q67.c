//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include<stdio.h>

int main (){
    int size,position,num;
    scanf("%d",&size);
    int arr1 [size],arr2 [size+1];
    for(int i = 0;i<size;i++){
        scanf("%d ",&arr1[i]);
    }
    scanf("%d %d",&position,&num);

    for(int i=0;i<size+1;i++){
        if(i==position){
            arr2 [i] = num;
            for(int j = i+1;j<size+1;j++){
                arr2 [j] = arr1 [j-1];
            }
            break;
        }
        arr2 [i] = arr1[i];
    }

    for(int i = 0;i<size+1;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");

    return 0;
}