#include <stdio.h>
void leader(int arr[],int length){
    for (int i = 0; i < length; i++){
        int check = 0;
        for(int j = i+1; j < length;j++){
            if (arr[i] < arr[j]){
                check = 1;
                break;
            }
        }
        if (check == 0){
            printf("%d",arr[i]);
            printf("\n");
        }
    }
}
int main()
{
    int list[] = {16,17,4,3,5,2};
    int length = sizeof(list)/sizeof(list[0]);
    leader(list,length);
    return 0;
}
