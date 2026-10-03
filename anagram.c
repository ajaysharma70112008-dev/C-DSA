#include <stdio.h>
#include <string.h>

int count(char a ,char arr[], int len){
    int cnt = 0; 
    for (int i = 0; i < len; i++){
        if(arr[i] == a){
            cnt++;
        }
    }
    return cnt;
}
void anagram(char arr1[],char arr2[],int len1, int len2){
    if (len1 != len2){
        printf("not an anagram");
        return;
    }
    int x,y;
    for (int i = 0; i < len1; i++){
        x = count(arr1[i],arr1,len1);
        y = count(arr1[i],arr2,len2);
        if (x != y){
            printf("not an anagram");
            return;
        }
    }
    printf("Yes this is an anagram");
}
int main()
{
    char list1[] = "silent";
    char list2[] = "listen";
    int len1 = strlen(list1);
    int len2 = strlen(list2);
    
    anagram(list1,list2,len1,len2);

    return 0;
}
