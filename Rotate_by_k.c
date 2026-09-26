#include <stdio.h>

void rotateByOne(int arr[], int length) {
    int temp;
    for (int i = 0; i < length - 1; i++) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void rotateByK(int arr[], int length, int k) {
    for (int r = 0; r < k; r++) {
        rotateByOne(arr, length);
    }
}

void printarr(int arr[], int length) {
    printf("{ ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}

int main() {
    int list[] = {1, 2, 3, 4, 5};
    int length = 5;
    int k = 2;

    rotateByK(list, length, k);
    printarr(list, length);  

    return 0;
}
