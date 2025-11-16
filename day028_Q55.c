// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include<stdio.h>

int main (){
    int a;
    scanf("%d",&a);

    printf("2 ");
    for(int i = 3;i<=a;i++){
        int isPrime = 1;
        for(int e = 2;e<i;e++){
            if(i%e==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ",i);
    }

    printf("\n");
    return 0;
}