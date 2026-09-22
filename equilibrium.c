#include <stdio.h>

int equilibrium(int arr[], int length) {
    int total = 0;
    for (int i = 0; i < length; i++) {
        total += arr[i];
    }

    for (int j = 0; j < length; j++) {
        int left_sum = 0;
        for (int k = 0; k < j; k++) {
            left_sum += arr[k];
        }
        int right_sum = total - left_sum - arr[j];

        if (left_sum == right_sum) {
            printf("Equilibrium found\n");
            return j;
        }
    }

    return -1;
}

int main() {
    int list[5] = {1, 3, 5, 2, 2};
    int index = equilibrium(list, 5);
    printf("%d\n", index);
    return 0;
}
