// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include<stdio.h>
int product(int x);

int main (){
    int a;
    scanf("%d",&a);

    printf("%d (",product(a));

    int reverse = 0;
    while(a!=0){
        reverse = reverse*10 + a%10;
        a /= 10;
    }
    
    int odd = 0;
    while(reverse!=0){
        if((reverse%10)%2 != 0){
            printf("%d",reverse%10);
            (reverse/10!=0)?printf("*"):printf(")\n");
            odd++;
        }
        reverse /= 10;
    }
    if(odd==0)
        printf("no odd digits, assume 1)\n");
    return 0;
}

int product(int x){
    int y = 1;
    while(x!=0){
        if((x%10)%2 != 0){
            y *= x%10;
        }
        x /= 10;
    }
    return y;
}