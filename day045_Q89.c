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

int main (){
    int i=0;
    char a=0;
    char arr[100];
    while(a!='\n'){
        a = getchar();
        if(a!='\n'){
            arr[i]=a;
            i++;
        }
    }
    
    char search = getchar();
    int count = 0;
    for(int j=0;j<i;j++){
        if(arr[j]==search)
            count++;
    }
    printf("%d\n",count);
    return 0;
}