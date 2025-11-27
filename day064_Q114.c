// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    static char s[1000001];
    printf("s = ");
    if (!fgets(s, sizeof(s), stdin)) return 0;

    size_t n = strlen(s);
    if (n > 0 && s[n-1] == '\n') {
        s[--n] = '\0';
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int last_index[256];
    for (int i = 0; i < 256; ++i) last_index[i] = -1;

    int max_len = 0;
    int start = 0;

    for (int i = 0; i < (int)n; ++i) {
        unsigned char ch = (unsigned char)s[i];

        if (last_index[ch] >= start) {
            start = last_index[ch] + 1;
        }

        last_index[ch] = i;
        int cur_len = i - start + 1;
        if (cur_len > max_len) max_len = cur_len;
    }

    printf("%d\n", max_len);
    return 0;
}