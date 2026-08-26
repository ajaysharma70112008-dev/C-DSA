#include <stdio.h>

void movezero(int arr[],int length){
    int swap;
    for (int i=0;i<length-1;i++){
        if (arr[i]==0 && arr[i+1]!=0){
            swap=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=swap;
        }
        else{
            if (arr[i]!=0){
                continue;
            }
            else{
                for(int j=i+1;j<length;j++){
                    if (arr[j]!=0){
                        swap=arr[j];
                        arr[j]=arr[i];
                        arr[i]=swap;
                        break;
                    }
                }
            }
        }
    }
    printf("{");
    for (int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
    printf("}");
}
int main(){
    int list[]={0,1,0,3,12};
    movezero(list,5);
}