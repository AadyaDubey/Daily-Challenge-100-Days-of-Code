// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>

int main() {
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    output = fopen("output.txt", "w");
    if (output == NULL) {
        fclose(input);
        printf("Error: Could not open or create output.txt\n");
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {

        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'b' + 1);
        }

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Conversion complete. Output written to output.txt\n");

    return 0;
}