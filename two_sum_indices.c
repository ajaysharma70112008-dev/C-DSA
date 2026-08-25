//this project gives the indices of two number whose sum is equal to target
#include <stdio.h>
int twosum(int arr[],int length,int target){
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(arr[i]+arr[j]==target){
                printf("%d and %d are two index whose sum is equals to target",i,j);
                return 0;
            }
        }
    }
    printf("no result found");
    return 0;
}

int main()
{
    int list[]={1,2,3,4,5};
    twosum(list,5,8);

    return 0;
}