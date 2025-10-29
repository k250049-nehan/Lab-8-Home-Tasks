#include <stdio.h>

int main() {
    int i, j, k;
    char alphabet = 'A';

    for(i = 1; i <= 5; i++) {
        for(j = i; j < 5; j++) {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        for(j = i; j < 5; j++) {
            printf(" ");
        }

        printf("\t|\t");

        for(j = i; j < 5; j++) {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("%d", k);
        }

        for(j = i; j < 5; j++) {
            printf(" ");
        }

        printf("\t|\t");

        for(j = i; j < 5; j++) {
            printf(" ");
        }
        for(k = 0; k < (2 * i - 1); k++) {
            printf("%c", alphabet + k);
        }
        for(j = i; j < 5; j++) {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}
