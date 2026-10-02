#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char arr[], int length) {
    for (int i = 0; i < (length - 1) / 2; i++) {
        if (arr[i] != arr[length - i - 2]) {
            return false;
        }
    }

    return true;
}

int main() {
    char list[] = "madam";
    int len = sizeof(list) / sizeof(list[0]);

    bool result = isPalindrome(list, len);

    if (result) {
        printf("Yes, this is a palindrome\n");
    } else {
        printf("No, this is not a palindrome\n");
    }

    return 0;
}
