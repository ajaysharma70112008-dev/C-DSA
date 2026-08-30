#include <stdio.h>
//this function give the maximum sum of a continuos subarray from a given array
int max(int arr[],int length){
    int maxsum=0;
    
    for (int i=0; i<length; i++){
        int currentsum=0;
        
        for (int j=length-1; j>=i; j--){
            currentsum+=arr[j];
        }
        
        if (currentsum>maxsum){
            maxsum=currentsum;
        }
    }
    
    return maxsum;
}

int main()
{
    int list[]={-2,1,-3,4,-1,2,2,-5,4};
    int ans=max(list,9);
    printf("%d",ans);

    return 0;
}