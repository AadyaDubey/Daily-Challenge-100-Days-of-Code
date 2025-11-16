// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include<stdio.h>
int sum_of_divisors (int x);

int main (){
    int a;
    scanf("%d",&a);
    (a==sum_of_divisors (a))?printf("Perfect number\n"):printf("Not a perfect number\n");
    return 0;
}

int sum_of_divisors (int x){
    int y = 0;
    for(int i = 1; i < x; i++){
        if(x%i==0){
            y += i;
        }
    }
    return y;
}