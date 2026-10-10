#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],x;
    
    for(int i = 0; i < n; i++){
        scanf("%d",&x);
        arr[i] = x;
    }
    
    int sum = 0;
    int count = 0;
    
    for(int j = 0; j < n; j++){
        sum += arr[j];
        if(sum < 0){
            count++;
            sum = 0;
        }
    }
    printf("%d",count);
    return 0;
}
