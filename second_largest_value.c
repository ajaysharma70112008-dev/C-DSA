                //second largest number of an array
#include <stdio.h>
#include <limits.h>
int seclarge(int arr[],int length){
    int largest,seclargest;
    
    // finds the largest number
    largest=arr[0];
    for(int i=0;i<length;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        
    }
    // finds the second largest number
    seclargest=INT_MIN;
    for(int j=0;j<length;j++){
        if(arr[j]>seclargest && arr[j]<largest){
            seclargest=arr[j];
        }
        
    }
    return seclargest;
}

//testing the seclargest function
int main(){
    int result;
    int list[]={1,2,3,4,5};
    result=seclarge(list,5);
    printf("%d\n",result);
    return 0;
}