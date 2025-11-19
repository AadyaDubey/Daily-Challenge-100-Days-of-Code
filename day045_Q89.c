// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include<stdio.h>
#include<string.h>

int main (){
    char arr[100], search;
    scanf("%s %c",arr,&search);
    int i = strlen(arr);
    
    int count = 0;
    for(int j=0;j<i;j++){
        if(arr[j]==search)
            count++;
    }
    printf("%d\n",count);
    return 0;
}