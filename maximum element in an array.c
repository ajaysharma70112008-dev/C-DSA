/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("enter the size of array:\n");
    scanf("%d",&a);
    int arr[a];
    
    //array value putting
    for(int i=0;i<a;i++){
        int ans;
        printf("the value of array element:\n");
        scanf("%d",&ans);
        arr[i]=ans;
    }
    //finding the max value
    int max=arr[0];
    for(int i=0;i<a;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d is the maximum value of the element in the array",max);

    return 0;
}