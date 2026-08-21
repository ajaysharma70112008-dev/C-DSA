#include <stdio.h>

int search(int arr[],int length,int target){
   for (int i=0;i<length;i++){
       if(arr[i]==target){
           return i+1;
       }
   }
   return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    // here search(array,length of array,value to be found)
    int result;
    result=search(arr,5,3);
    printf("%d",result);
}
