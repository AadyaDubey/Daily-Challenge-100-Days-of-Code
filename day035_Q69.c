// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<stdio.h>

int main (){
    int size;
    scanf("%d",&size);
    int arr [size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int second_largest=arr[0];
    int largest=arr[0];
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            second_largest=largest;
            largest=arr[i];
        }
    }

    printf("%d\n",second_largest);
}