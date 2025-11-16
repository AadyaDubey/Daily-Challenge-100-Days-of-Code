// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

# include<stdio.h>

int main (){
    int i=0;
    char a,arr[100];
    while(a!='\n'){
        a = getchar();
        if(a!='\n'){
            arr[i]=a;
            i++;
        }
    }

    for(int j=0;j<i;j++){
        for(int k=j+1;k<i;k++){
            if(arr[j]==arr[k]){
                printf("%c\n",arr[j]);
                return 0;
            }
        }
    }
    return 0;
}