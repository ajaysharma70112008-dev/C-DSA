#include <stdio.h>

void mis_rep(int arr[], int len){
    for (int num = 1; num <= len; num++){
        int count = 0;
        for (int j = 0; j < len; j++){
            if (arr[j] == num){
                count++;
            }
        }
        if (count == 2){
            printf("Repeated number is %d\n", num);
        }
        if (count == 0){
            printf("Missing number is %d\n", num);
        }
    }
}

int main()
{
    int list[] = {1,2,2,4};
    mis_rep(list, sizeof(list)/sizeof(list[0]));
    return 0;
}
