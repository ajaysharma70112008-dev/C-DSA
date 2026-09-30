#include <stdio.h>
int recur(int n){
    if (n == 1 || n == 0){
        return 1; 
    }
    return n * recur(n - 1);
}
int main()
{
    int ans = recur(4);
    printf("%d", ans);
    return 0;
}
