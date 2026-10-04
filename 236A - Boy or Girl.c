#include <stdio.h>
#include <string.h>

int main() 
{
    char arr1[100];
    scanf("%s", arr1);

    char arr2[100];
    int ind = 0;

    for(int i = 0; i < strlen(arr1); i++){
        int check = 1;

        for(int j = 0; j < ind; j++){
            if(arr2[j] == arr1[i]){
                check = 0;
                break;
            }
        }

        if(check == 1){
            arr2[ind] = arr1[i];
            ind++;
        }
    }

    arr2[ind] = '\0';

    if(strlen(arr2) % 2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
}
