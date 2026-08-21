#include<stdio.h>

//printarr funtion is used for printing the array after competion of task
void printarr(int arr[],int length){
    printf("{ ");
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
    printf(" }");
}

//change function is responsible for actual swapping of an array
void change(int arr[],int length){
    int temp;
    for(int i=0;i<length-1;i++){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printarr(arr, length);
}

//main function just shows the demo over an example array
int main(){
    int list[5]={1,2,3,4,5};
    change(list,5);
    return 0;
}