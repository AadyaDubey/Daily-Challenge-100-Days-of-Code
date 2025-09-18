//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main (){
    printf("Enter time in seconds: ");
    int a;
    scanf("%i",&a);
    int hr = a/3600;
    int min = (a%3600)/60;
    int sec = ((a%3600)%60);
    printf("%i:%i:%i\n",hr,min,sec);
    return 0;
}