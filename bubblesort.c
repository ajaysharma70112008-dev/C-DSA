#include <stdio.h>

void print(int arr1[], int leng){
    printf("[");
    for (int i = 0; i < leng; i++){
        printf("%d ",arr1[i]);
    }
    printf("]");
}
void bubbleSort(int arr[],int len){
    for (int i = 0; i < len; i++){
        for(int j = 0; j < len - i - 1; j++ ){
            if (arr[j] > arr[j+1]){
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
            }
        }
    }
    print(arr,len);
}
int main() {
    int list[] = {4,3,2,1};
    int len = sizeof(list)/sizeof(list[0]);
    bubbleSort(list,len);
    return 0;
}
