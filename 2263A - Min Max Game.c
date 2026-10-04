#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int ones = 0, zeros = 0;

        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);

            if (x == 1)
                ones++;
            else
                zeros++;
        }

        if (ones >= zeros)
            printf("Bessie\n");
        else
            printf("Elsie\n");
    }

    return 0;
}
