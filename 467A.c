#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i = 0; i < n; i++){
        int p,q;
        scanf("%d",&p);
        scanf("%d",&q);
        if (q - p > 1){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
