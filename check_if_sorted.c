                        //to check whether the array is sorted in ascending order
#include<stdio.h>
#include<stdbool.h>

bool sorted(int arr[],int length){
    for(int i=0;i<length-1;i++){
        if (arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int list[5]={1,2,3,4,5};
    bool res;
    res=sorted(list,5);
    if (res){
        printf("yes, the array is sorted\n");
    }
    else{
        printf("this array is not sorted\n");
    }
    return 0;
}