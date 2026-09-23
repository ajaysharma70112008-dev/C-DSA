#include <stdio.h>

void diff(int arr[],int length){
    int d = 78;
    
    for (int i = 0; i < length; i++){
        //printf("%d\n",arr[i]);
        for (int j = i+1; j < length; j++){
            //printf("%d\n",arr[j])
            if (arr[i] - arr[j] == d || arr[j] - arr[i] == d){
                printf("(%d"  , arr[i]);
                printf(",");
                printf("%d)"  , arr[j]);
            }
        }
    }
}
int main()
{
    int list[6] = {5 , 20 , 3 , 2 , 50 , 80};
    int length = 6;
    diff (list , length);

    return 0;
}
