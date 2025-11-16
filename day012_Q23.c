/* Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>

int main (){
    int a;
    scanf("%i",&a);
    if(a<=5){
        printf("Fine ₹%i\n",a*2);
    }else if (a<=10){
        printf("Fine ₹%i\n",10+(a-5)*4);
    }else if(a<=30){
        printf("Fine ₹%i\n",30+(a-10)*6);
    }else{
        printf("Membership Cancelled.\n");
    }
    return 0;
}