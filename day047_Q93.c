// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include<stdio.h>
#include<string.h>

int main (){
    char arr[100];
    scanf("%s",arr);
    int i = strlen(arr);

    char trash = getchar();
    char b = getchar();
    while(b!='\n'){
        for(int j=0;j<i;j++){
            if(b==arr[j]){
                break;
            }else if(b!=arr[j]&&j==i-1){
                printf("Not anagrams\n");
                return 0;
            }
        }
        b = getchar();
    }
    printf("Anagrams\n");
    return 0;
}