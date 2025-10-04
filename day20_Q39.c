//Q39: Write a program to find the product of odd digits of a number.

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
    
    int n = 0;
    while(a!=0){
        if((a%10)%2 != 0){
            
        }
        a /= 10;
    }

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