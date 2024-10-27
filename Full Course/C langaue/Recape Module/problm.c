#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Check if N is odd
    if (N % 2 == 0) 
    {
        return 0;
    }

    // Calculate the number of rows and columns
    int rows = N;
    int cols = N;

    // Generate the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            // Print '*' for the sides and center, '#' for the middle row and column
            if (i == (N + 1) / 2 || j == (N + 1) / 2)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
