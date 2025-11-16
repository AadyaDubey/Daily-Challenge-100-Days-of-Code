// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main (){
    int a;
    printf("Enter the tempreture (in celcius): ");
    scanf("%i",&a);
    printf("Tempreture in Fahrenheit is: %.1f\n",(a * 1.8)+32);
    return 0;
}