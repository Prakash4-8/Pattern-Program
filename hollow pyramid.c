#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }

        // Print stars and spaces inside
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || i == rows || k == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
