// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include<stdio.h>

int main (){
    int v=0,c=0;
    char a;
    while(1){
        a = getchar();
        if(a=='\n')break;
        (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')?v++:c++;
    }

    printf("Vowels=%d, Consonants=%d\n",v,c);
    return 0;
}