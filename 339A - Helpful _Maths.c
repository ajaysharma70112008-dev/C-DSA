#include <stdio.h>
#include <string.h>

int main() 
{
    char arr1[100];
    scanf("%s", arr1);
    int swap;
    
    for(int i = 0; i < strlen(arr1); i += 2){
        for(int j = i+2; j < strlen(arr1); j += 2){
            if(arr1[j] < arr1[i]){
                swap = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = swap;
            }
        }
    }
    printf("%s",arr1);
}
