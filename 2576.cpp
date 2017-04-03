#include <stdio.h>

int main(){
    int c = 7;
    int sum = 0;
    int min = 99;
    while(c--){
        int n;
        scanf("%d", &n);
        if(n % 2 == 0) continue;
        sum += n;
        if(n < min) min = n;
    }
    if(sum == 0) printf("-1\n");
    else printf("%d\n%d\n", sum, min);
    return 0;
}