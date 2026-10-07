#include <stdio.h>
int rec_sum(int n){
    if(n == 0){
        return 0;
    }

    return (n%10) + rec_sum(n/10);
}

int main()
{
    int sum = rec_sum(12345);
    printf("%d",sum);

    return 0;
}
