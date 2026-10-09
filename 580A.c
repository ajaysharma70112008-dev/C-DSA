
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = 1;
    int count = 1;

    for (int j = 0; j < n - 1; j++) {
        if (arr[j] <= arr[j + 1]) {
            count++;
        } else {
            count = 1;
        }

        if (max < count) {
            max = count;
        }
    }

    printf("%d\n", max);

    return 0;
}
