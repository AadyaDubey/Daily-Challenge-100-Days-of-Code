//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>

int main (){
    printf("Enter an integer: ");
    int a;
    scanf("%i",&a);

    if(a%2==0){
        printf("%i is even\n",a);
    }else {
        printf("%i is odd.\n",a);
    }
    return 0;
}