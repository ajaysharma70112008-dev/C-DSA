
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[101];
    scanf("%100s", arr);

    int frq[26][26] = {0};

    for (int j = 0; j < n - 1; j++) {
        int x = arr[j] - 'A';
        int y = arr[j + 1] - 'A';

        frq[x][y]++;
    }

    int max = 0;
    int index[1][2] = {{0, 0}};

    for (int k = 0; k < 26; k++) {
        for (int l = 0; l < 26; l++) {
            if (frq[k][l] > max) {
                max = frq[k][l];
                index[0][0] = k;
                index[0][1] = l;
            }
        }
    }

    printf("%c%c\n",
           'A' + index[0][0],
           'A' + index[0][1]);

    return 0;
}
