//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include<stdio.h>
int binary (int array[],int size,int find);

int main (){
    int size,find;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&find);

    int index = binary(arr,size,find);

    if(index==-1)
        printf("-1\n");
    else
        printf("Found at index %d\n",index);

    return 0;
}

int binary (int array[],int size,int find){
    int lower=0,upper=size-1;

    while(lower<=upper){
        int mid = lower + (upper-lower)/2;
        if(array[mid]!=find){
            if(array[mid]<find)
                lower=mid+1;
            else
                upper=mid-1;
        }else
            return mid;
    }

    return -1;
}