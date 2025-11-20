// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include<stdio.h>

int main(){
    char name [100], ini [50],c;
    int i = 0;
    while(1){
        scanf("%s%c",name,&c);
        ini[i]=name[0];
        i++;
        if(c=='\n')
            break;
    }

    printf("%c.%c.\n",ini[0],ini[1]);
    return 0;
}