#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int prev;
    scanf("%d", &prev);

    int increasing = 1;
    int decreasing = 1;

    for (int i = 1; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (x <= prev) {
            increasing = 0;
        }

        if (x >= prev) {
            decreasing = 0;
        }

        prev = x;
    }

    if (increasing) {
        printf("YES\n");
    } else if (decreasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}