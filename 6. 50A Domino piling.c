#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int maxDominoes = (M * N) / 2;
    printf("%d\n", maxDominoes);

    return 0;
}
