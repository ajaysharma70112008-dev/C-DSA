
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int count(char a, char arr[], int len) {
    int cnt = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] == a) {
            cnt++;
        }
    }

    return cnt;
}

void countCharacters(char arr[], int len) {
    char checked[100];
    int checkedCount = 0;

    for (int i = 0; i < len; i++) {
        bool found = false;

        for (int j = 0; j < checkedCount; j++) {
            if (arr[i] == checked[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            printf("%c is present %d many times \n", arr[i], count(arr[i], arr, len));
            checked[checkedCount] = arr[i];
            checkedCount++;
        }
    }
}

int main() {
    char str[] = "ajay sharma"; 

    int len = strlen(str);
    countCharacters(str, len);

    return 0;
}
