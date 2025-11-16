// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include<stdio.h>

int main(){
    int i = 0;
    char a = 0,arr[100];
    while(a!='\n'){
        a = getchar();
        if(a!='\n'&&a!='a'&&a!='e'&&a!='i'&&a!='o'&&a!='u'){
            arr[i]=a;
            i++;
        }
    }

    for(int j=0;j<i;j++)
        printf("%c",arr[j]);
    printf("\n");
    return 0;
}