// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include<stdio.h>

int main (){
    char arr[100], a = 0;
    int i = 0;

    while(a!='\n'){
        a = getchar();
        if(a=='\n')break;
        else if(a==' ')
            a = '-';
        arr[i]=a;
        i++;
    }

    printf("%s\n",arr);
    return 0;
}