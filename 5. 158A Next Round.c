#include <stdio.h>

int main() {
    int n, k, count = 0;
    int scores[50];

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int cutoff = scores[k - 1];

    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff && scores[i] > 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
