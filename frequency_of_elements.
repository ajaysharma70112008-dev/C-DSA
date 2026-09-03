#include <stdio.h>
void frequency(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        int alreadySeen = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadySeen = 1;
                break;
            }
        }

        if (alreadySeen) {
            continue;
        }

        int count = 0;
        for (int j = 0; j < length; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
