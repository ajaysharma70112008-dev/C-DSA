#include <stdio.h>

int common(int arr1[],int arr2[],int length1,int length2){
    
    printf("[");
    
    for (int i=0; i<length1; i++){
        for (int j=0; j<length2; j++){
            if (arr1[i] == arr2[j]){
                printf(" %d ",arr1[i]);
            }
        }
    }
    printf("]");
    
    return 0;
}

int main()
{
    int list1[] = {1,2,3,4};
    int list2[] = {3,4,5,6};
    
    common(list1,list2,4,4);

    return 0;
}
