#include <stdio.h>

int main(void)
{
    int n, k, e = 100;
    scanf("%d%d", &n, &k);
    int c[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    int i = 0;

    do {
        e--;
        
        if (c[i] == 1) {
            e -= 2;
        }

        if (i + k >= n) {
            i = (i + k) % n;
        }
        else {
            i = i + k;
        }
    } while (i != 0);

    printf("%d\n", e);
}