// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include<stdio.h>
#include<string.h>

int main (){
    char array [100];
    scanf("%s",array);
    int i = strlen(array);

    //i-1 is used to not print the nul character present at the end of strings
    for(int j=i-1;j>=0;j--){ 
        printf("%c",array[j]);
    }
    printf("\n");
    return 0;
}