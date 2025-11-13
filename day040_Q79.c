// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < rows + cols - 1; i++) {

        int r, c;

        if (i % 2 == 0) {
            r = (i < rows) ? i : rows - 1;
            c = i - r;

            while (r >= 0 && c < cols) {
                printf("%d ", arr[r][c]);
                r--;
                c++;
            }
        }

        else {
            c = (i < cols) ? i : cols - 1;
            r = i - c;

            while (c >= 0 && r < rows) {
                printf("%d ", arr[r][c]);
                r++;
                c--;
            }
        }
    }
    
    printf("\n");
    return 0;
}
