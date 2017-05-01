#include <stdio.h>

int main(){
    long long cache[10001];
    int n;
    cache[1] = 1;
    cache[2] = 1;
    cache[3] = 1;
    
    scanf("%d", &n);
    for(int i = 4; i <= n; i++){
        cache[i] = cache[i-1] + cache[i-3];
    }
    printf("%lld\n", cache[n]);
    return 0;
}