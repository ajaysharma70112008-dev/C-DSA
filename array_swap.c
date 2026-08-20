#include <stdio.h>

int main()
{
    
    //array creation
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        int p;
        printf("Enter the value of the element %d: ",i+1);
        scanf("%d",&p);
        arr[i]=p;
    }
    
    //array print
    for (int i=0;i<size;i++)
        printf("%d",arr[i]);
    printf("\n");
    
    //array swap
    int temporary;
    for(int i=0,j=size-1;i<size/2;i++,j--){
        temporary=arr[i];
        arr[i]=arr[j];
        arr[j]=temporary;
        
    }
    
    //swapped array print
    for (int i=0;i<size;i++)
        printf("%d",arr[i]);
}
