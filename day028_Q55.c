/* Q55: Write a program to print all the prime numbers from 1 to n.
*/

#include<stdio.h>

int main (){
    int a;
    scanf("%d",&a);

    printf("2 ");
    for(int i = 3;i<=a;i++){
        int prime = 1;
        for(int e = 2;e<i;e++){
            if(i%e==0){
                prime = 0;
                break;
            }
        }
        if(prime)
            printf("%d ",i);
    }

    printf("\n");
    return 0;
}