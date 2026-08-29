#include <stdio.h>

//this code finds the max profit possible from buy and sell of a stock

int max(int arr[],int length){
    int minprice = arr[0] , maxprofit = 0;
    
    for (int i=0; i<length; i++){
        
        if(arr[i] < minprice){
            minprice = arr[i];
        }
        
        else{
            
            if ((arr[i]-minprice) > maxprofit){
                maxprofit = (arr[i]-minprice);
            }
        }
    }
    return maxprofit;
}

int main()
{
    int ans;
    int list[]={7,1,5,3,6,4};
    ans = max(list,6);
    printf("%d " , ans);
    return 0;
}
