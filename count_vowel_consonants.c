#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cnt(char arr[], int length) {
    int cnt_v = 0, cnt_c = 0;
    char vowel[] = "AaEeIiOoUu";

    for (int i = 0; i < length; i++) {
        int isVowel = 0;

        for (int j = 0; j < strlen(vowel); j++) {
            if (arr[i] == vowel[j]) {
                isVowel = 1;
                break;
            }
        }

        if (isVowel) {
            cnt_v++;
        }
        else if (isalpha((unsigned char)arr[i])) {
            cnt_c++;
        }
    }

    printf("%d vowels and %d consonants\n", cnt_v, cnt_c);
}
