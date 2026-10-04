#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
		char arr1[100];
		char arr2[100];
		scanf("%s",arr1);
		printf("\n");
		scanf("%s",arr2);
		for(int i = 0; i < strlen(arr1); i++){
		    if (tolower(arr1[i]) < tolower(arr2[i])){
		        printf("-1");
		        return 0;
		    }
		    else if(tolower(arr1[i]) > tolower(arr2[i])){
		        printf("1");
		        return 0;
		    }
		}printf("0");
	}
