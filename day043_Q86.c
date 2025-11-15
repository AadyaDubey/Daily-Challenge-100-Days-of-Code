// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include<stdio.h>

int main (){
    char arr1[100],arr2[100];
    char a=0;
    int i=0;

    while(a!='\n'){
        a = getchar();
        if(a!='\n'){
            arr1[i] = a;
            i++;
        }
    }

    for(int j=i-1;j>=0;j--){
        arr2[j] = arr1[i-j-1];
    }

    int equal = 1;
    for(int k=0;k<i;k++){
        if(arr1[k]!=arr2[k]){
            equal--;
            break;
        }
    }
    if(!equal)
        printf("Not palindrome\n");
    else
        printf("Palindrome\n");

    return 0;
}