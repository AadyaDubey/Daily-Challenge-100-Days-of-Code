//Q32: Write a program to check if a number is a palindrome.

#include<stdio.h>
int reverse (int x);

int main (){
    int a;
    scanf("%i",&a);
    int b = reverse(a);
    (a==b)?printf("Palindrome\n"):printf("Not palindrome\n");
    return 0;
}

int reverse (int x){
    int y = 0;
    while(x!=0){
        y = y*10 + x%10;
        x = x/10;
    }
    return y;
}