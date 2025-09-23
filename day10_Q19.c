//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include<stdio.h>

int main (){
    printf("Enter side of triangles: ");
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);

    if(a+b>c&&b+c>a&&c+a>b){
        if(a==b&&b==c&&c==a){
            printf("Equilateral\n");
        }else if(a==b||b==c||c==a){
            printf("Isoceles\n");
        }else{
            printf("Scalene\n");
        }
    }else{
        printf("Given values do not form sides of a triangle.\n");
    }
    return 0;
}