#include <stdio.h>

void union(int arr1[],int arr2[],int length1,int length2){
    printf("[ ");
    
    for (int i=0; i<length1; i++){
        printf("%d ",arr1[i]);
    }
    for (int j=0; j<length2; j++){
        int check=0;
        for (int i=0; i<length1;i++){
            if (arr2[j]==arr1[i]){
                check=1;
                break;
            }
            
        }
        if(check==0){
            printf("%d ",arr2[j]);
        }
    }
    printf("]");
}
int main()
{
    int arr1[]={1,2,3};
    int arr2[]={3,4,5};
    union(arr1,arr2,3,3);
    return 0;
}
