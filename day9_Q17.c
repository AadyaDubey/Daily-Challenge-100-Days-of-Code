//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:


*/

#include<stdio.h>
#include<math.h>

int main (){
    printf("Enter coefficients a b c: ");
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);

    int D = b*b-4*a*c;
    int r1 = (-b+pow(D,0.5))/(2*a);
    int r2 = (-b-pow(D,0.5))/(2*a);
    if(D<0){
        printf("Roots are complex\n");
    }else if(D==0){
        printf("Roots are real and same: %i\n",r1);
    }else{
        printf("Roots are real and different: %i, %i\n",r1,r2);
    }
    return 0;
}