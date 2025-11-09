//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include<stdio.h>

int main (){
    int size,num;
    scanf("%d",&size);
    int arr1 [size],arr2 [size+1];
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }

    scanf("%d",&num);
    int inserted = 0;
    for(int i=0;i<size;i++){
        if(num<arr1[i]){
            arr2[i] = num;
            inserted++;
            for(int j = i+1;j<size+1;j++){
                arr2[j] = arr1[j-1];
            }
            break;
        }
        arr2[i] = arr1[i]; 
    }

    if(!inserted){
        arr2[size] = num;
    }

    for(int i = 0;i<size+1;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    
    return 0;
}