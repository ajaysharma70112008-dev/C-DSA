#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s",arr);
    int low = 0;
    int high = 0;
    int len = strlen(arr);
    
    for(int i = 0; i < len; i++){
        if(islower(arr[i])){
            low++;
        }
        else{
            high++;
        }
    }
    
    if(low >= high){
        for(int j = 0;j < len; j++){
            if(isupper(arr[j])){
                arr[j] = tolower(arr[j]);
            }
        }
    }
    
    else{
        for(int j = 0;j < len; j++){
            if(islower(arr[j])){
                arr[j] = toupper(arr[j]);
            }
        }
    }
    
    printf("%s",arr);
    
    return 0;
}
