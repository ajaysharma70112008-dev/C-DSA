#include <stdio.h>
//find a number missing in an array
int missing(int arr[],int length){
    int sum=0,actual_sum=0;
    for (int i=0;i<length;i++){
        actual_sum+=arr[i];
    }
    for (int i=0;i<=length+1;i++){
        sum+=i;
    }
    return sum-actual_sum;
}

int main()
{
    int list[]={1,2,4,5};
    int misNum;
    misNum=missing(list,4);
    printf("%d ",misNum);
    return 0;
}