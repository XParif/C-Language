#include <stdio.h>

int main(void)
{
    int b, n, m;
    scanf("%d%d%d", &b, &n, &m);
    int keyboards[n];
    int drives[m];
    int isPossible = 0;
    int max = 0;

    for (int i = 0 ; i < n; i++) {
        scanf("%d", &keyboards[i]);
    }

    for (int i = 0 ; i < m; i++) {
        scanf("%d", &drives[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int total = keyboards[i] + drives[j];
            if (total > max && total <= b) {
                max = total;
                isPossible = 1;
            }
        }
    }

    if (isPossible) {
        printf("%d\n", max);
    }
    else {
        printf("-1\n");
    }

}