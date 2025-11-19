#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 9;

    for (int i = 1; i <= rows; i++) {

        if (i == 1) {
            for (int j = 1; j <= cols; j++) {
                printf("%d ", j);
            }
        }
        else {
            for (int j = 1; j <= cols; j++) {

                if (j == i) {
                    printf("%d ", i);
                }

                else if (j == (10 - i) && i != 5) {
                    printf("%d ", (10 - i));
                }
                else {
                    printf("  ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}
