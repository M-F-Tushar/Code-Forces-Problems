#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        int p, v, t;
        scanf("%d %d %d", &p, &v, &t);
        if (p + v + t >= 2) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

