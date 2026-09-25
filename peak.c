#include <stdio.h>
int peak(int arr[],int length){
    for(int i = 0; i < length; i++){
        if (i == 0){
            if (arr[0] >= arr[1]){
                return arr[0];
            }
        }
        else {
            if (i == length-1){
                if (arr[length - 1] >= arr[length-2]){
                    return arr[length-1];
                }
            }
            else{
                if (arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                    return arr[i];
                }
            }
        }
    }
}
int main()
{
    int list[] = {1,3,20,4,1,0};
    int a = peak(list,6);
    printf("%d",a);
    return 0;
}
