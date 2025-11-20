// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char arr [100];
    scanf("%s",arr);
    int len = strlen(arr);
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            for(int k=i;k<=j;k++){
                printf("%c",arr[k]);
            }
            printf((i==len-1)?"\n":",");
        }
    }
    return 0;
}