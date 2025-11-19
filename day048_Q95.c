// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include<stdio.h>
#include<string.h>

int main (){
    char word1[100],word2[100];
    scanf("%s %s",word1,word2);
    int match;
    for(int i=0;i<strlen(word2);i++){
        if(word1[0]==word2[i]){
            match=i;
            break;
        }
    }

    for(int i=0;i<strlen(word2);i++){
        if(word1[i]!=word2[(i+match)%strlen(word1)]){
            printf("Not rotation\n");
            return 0;
        }
    }
    printf("Rotation\n");
    return 0;
}