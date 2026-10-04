#include <stdio.h>
#include <string.h>
 
int main()
{
    char arr1[100];
    scanf("%s", arr1);
 
    int cnt = 0;
    char past = arr1[0];
 
    for(int i = 1; i < strlen(arr1); i++){
        if(arr1[i] == past){
            cnt++;
 
            if(cnt == 6){
                printf("YES");
                return 0;
            }
        }
        else{
            past = arr1[i];
            cnt = 0;
        }
    }
 
    printf("NO");
}
