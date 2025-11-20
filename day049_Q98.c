// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include<stdio.h>

int main(){
    char name[100],ini[50];
    int i = 0;
    while(i<3){
        scanf("%s",name);
        if(i<2)
            ini[i]=name[0];
        i++;
    }
    printf("%c.%c. %s\n",ini[0],ini[1],name);
    return 0;
}