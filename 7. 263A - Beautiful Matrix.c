#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[5][5];
    int row, col;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    int moves = abs(row - 2) + abs(col - 2);
    printf("%d\n", moves);

    return 0;
}
