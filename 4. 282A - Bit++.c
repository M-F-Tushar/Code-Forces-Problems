#include <stdio.h>

int main() {
    int n, x = 0;
    char statement[4];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", statement);

        // If the second character is '+', it's an increment
        if (statement[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}
/*
Each statement is always 3 characters, like ++X, X++, --X, or X--.
The middle character (statement[1]) is always the key:

If it’s '+', then it’s an increment.

If it’s '-', then it’s a decrement.
*/