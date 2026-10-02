#include <stdio.h>
void rev_str(char arr[],int length){
    
    for(int i = 0; i < length/2; i++){
        
        char char_e = arr[i];
        arr[i] = arr[length - i - 2];
        arr[length - i - 2] = char_e;
    }
    printf("%s", arr);
}

int main()
{
    char list[] = "Ajay Sharma";
    int len = sizeof(list)/sizeof(list[0]);
    rev_str(list,len);
    return 0;
}
