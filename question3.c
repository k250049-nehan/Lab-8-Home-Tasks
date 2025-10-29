#include <stdio.h>

int main() {
    int original[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };

    int inverted[4][4];
    int i, j, whiteCount = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            inverted[i][j] = 1 - original[i][j];
            if(original[i][j] == 1)
                whiteCount++;
        }
    }

    printf("Original Image\t\tInverted Image\n");
    printf("---------------------------------------\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", original[i][j]);
        }
        printf("\t\t");
        for(j = 0; j < 4; j++) {
            printf("%d ", inverted[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal white pixels in original image: %d\n", whiteCount);

    return 0;
}
