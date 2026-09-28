#include <stdio.h>

void sort_merge(int arr1[], int arr2[], int len1, int len2, int arr3[]){
    int in = 0, i = 0, j = 0;

    // compare while both arrays still have elements
    while (i < len1 && j < len2){
        if (arr1[i] < arr2[j]){
            arr3[in] = arr1[i];
            i++;
        }
        else{
            arr3[in] = arr2[j];
            j++;
        }
        in++;
    }

    // copy leftovers from arr1 (if any)
    while (i < len1){
        arr3[in] = arr1[i];
        i++;
        in++;
    }

    // copy leftovers from arr2 (if any)
    while (j < len2){
        arr3[in] = arr2[j];
        j++;
        in++;
    }
}

void print(int arr3[], int len3){
    printf("[");
    for (int i = 0; i < len3; i++){
        printf("%d ", arr3[i]);
    }
    printf("]");
}

int main()
{
    int arr1[] = {1,3,5};
    int arr2[] = {2,4,6};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    int len3 = len1 + len2;
    int arr3[len3];

    sort_merge(arr1, arr2, len1, len2, arr3);
    print(arr3, len3);

    return 0;
}
