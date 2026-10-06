#include <stdio.h>

int main(void) {
    int n, k, a[n];
    scanf("%d %d", &n, &k);
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] > 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}