
#include <stdio.h>

int maxOnes(int arr[], int n) {
    int count = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;

            if (count > max) {
                max = count;
            }
        }
        else {
            count = 0;
        }
    }

    return max;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", maxOnes(arr, n));

    return 0;
}
