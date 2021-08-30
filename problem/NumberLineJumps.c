#include <stdio.h>

int main(void)
{
    int x1, x2, v1, v2;
    int xR[20];
    int xQ[20];
    int isFound = 0;
    scanf("%d%d%d%d", &x1, &v1, &x2, &v2);

    xR[0] = x1;
    xQ[0] = x2;

    for (int i = 1; i < 20; i++) {
        xR[i] = xR[i-1] + v1;
        xQ[i] = xQ[i-1] + v2;
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (xR[i] == xQ[j] && xR[i] != 0) {
                printf("%d\n%d\n", xR[i], xQ[j]);
                isFound = 1;
                break;
            }
        }
        if (isFound) {
            break;
        }
    }

    if (isFound) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}