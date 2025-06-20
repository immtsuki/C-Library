#include <stdio.h>

int main() {
    int i, j, swap, n;

    printf("How many numbers you want to input? : ");
    scanf("%d", &n);

    int input[n];

    for (i = 0; i < n; i++) {
        printf("\n\tEnter num %d: ", i + 1);
        scanf("%d", &input[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (input[i] > input[j]) {
                swap = input[i];
                input[i] = input[j];
                input[j] = swap;
            }
        }
    }

    printf("\nIn ASCENDING order:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", input[i]);
    }

    printf("\n\nIn DESCENDING order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d\t", input[i]);
    }

    return 0;
}
