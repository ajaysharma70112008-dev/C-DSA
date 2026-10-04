
#include <stdio.h>
 
int main()
{
    int n;
    int x = 0;
    scanf("%d",&n);
    char ope[4];
    for(int i = 0; i < n; i++){
        scanf("%s",ope);
        if(ope[0] == '+' || ope[2] == '+'){
            x++;
        }
        else{
            x--;
        }
    }
    printf("%d",x);
    return 0;
}
