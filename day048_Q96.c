// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char arr[100];
    fgets(arr, sizeof(arr), stdin); 
    int i = 0, start = 0;

    while (1) {
        if (arr[i] == ' ' || arr[i] == '\0' || arr[i] == '\n') {
            reverse(&arr[start], &arr[i - 1]);
            start = i + 1;
        }
        if (arr[i] == '\0')
            break;
        i++;
    }

    printf("%s", arr);
    return 0;
}