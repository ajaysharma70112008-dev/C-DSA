
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int selected = 0;
    int count = 0;

    while (selected <= total - selected) {
        int maxi = arr[0];
        int index = 0;

        for (int j = 1; j < n; j++) {
            if (arr[j] > maxi) {
                maxi = arr[j];
                index = j;
            }
        }

        selected += maxi;
        arr[index] = 0;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
