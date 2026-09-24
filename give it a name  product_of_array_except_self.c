#include <stdio.h>
void product(int arr1[], int arr2[], int length){
    for (int i = 0; i < length; i++){
        int sol = 1, j = 0;
        while (j < length){
            if (j != i){
                sol *= arr1[j];
            }
            j++;
        }
        arr2[i] = sol;
        printf("%d ", arr2[i]);
    }
}
int main()
{
    int list1[] = {1, 2, 3, 4};
    int list2[4];
    int length = 4;
    product(list1, list2, length);
    return 0;
}
