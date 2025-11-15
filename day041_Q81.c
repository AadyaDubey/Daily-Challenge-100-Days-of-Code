// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include<stdio.h>  

int main (){
    int i = 0;
    char a=0;
    while(a!='\n'){
        a = getchar();
        if(a!='\n'||i==0&&a=='\n')
            i += 1;
    }

    printf("%d\n",i);
    return 0;
}

