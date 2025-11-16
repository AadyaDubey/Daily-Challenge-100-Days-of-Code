// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include<stdio.h>

int main (){
    char a = 0;
    char arr[100];
    int i = 0;
    while(a!='\n'){
        a = getchar();
        if(a!='\n'){
            if(a>64&&a<91)
                arr[i] = a+32;
            else
                arr[i] = a-32;
            i++;
        }
    }

    for(int j=0;j<i;j++){
        printf("%c",arr[j]);
    }
    printf("\n");
    return 0;
}