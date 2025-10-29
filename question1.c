#include <stdio.h>

int main() {
    int marks[3][4] = {
        {85, 92, 78, 90},
        {88, 76, 95, 84},
        {90, 85, 88, 92}
    };

    float avg[3];
    int i, j, sum;

    for(i = 0; i < 3; i++) {
        sum = 0;
        for(j = 0; j < 4; j++) {
            sum += marks[i][j];
        }
        avg[i] = sum / 4.0;
    }

    for(i = 0; i < 3; i++) {
        printf("Average score of Class %d: %.2f\n", i + 1, avg[i]);
    }

    return 0;
}
