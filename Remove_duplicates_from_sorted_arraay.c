#include <stdio.h>

//this function remove all the duplicates from the sorted list
int removeduplicates(int arr[],int length){
    if (length==0){
        return length;
    }
    int index=1;
    for (int i=0;i<length;i++){
        if(arr[i]!=arr[index-1]){
            arr[index]=arr[i];
            index++;
        }
    }
    return index;
}
//this function prints the new array
void printarr(int arr[],int length){
    printf("{");
    for(int i=0;i<length;i++){
        printf("%d",arr[i]);
    }
    printf("}");
}
int main()
{
   int list[]={1,1,2,2,3,4,4,5};
   int l;
   l=removeduplicates(list,8);
   printarr(list,l);

    return 0;
}