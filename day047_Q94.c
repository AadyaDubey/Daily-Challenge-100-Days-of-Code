// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include<stdio.h>
#include<string.h>

int main (){
    char largest_word [100], compare_word[100], c;
    scanf("%s",largest_word);
    int largest=strlen(largest_word),compare=0;
    
    while(1){
        scanf("%c",&c);
        if(c=='\n')
            break;
        scanf("%s",compare_word);
        compare = strlen(compare_word);
        if(largest<compare){
            largest=compare;
            for(int i=0;i<compare;i++)
                largest_word[i]=compare_word[i];
        }
    }

    printf("%s\n",largest_word);
    return 0;
}