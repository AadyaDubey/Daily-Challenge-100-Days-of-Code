//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>

int main(){
    printf("Enter three numbers: ");
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    if(a>b&&a>c){
        printf("Largest is %i\n",a);
    }else if(b>a&&b>c){
        printf("Largest is %i\n",b);
    }else{
        printf("Largest is %i\n",c);
    }
    return 0;
}