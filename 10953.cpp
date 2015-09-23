#include <stdio.h>

int main(){
    char input[10];
    int n;
    scanf("%d", &n);
    while(n--){
        scanf("%s",input);
        int a = input[0] - '0';
        int b = input[2] - '0';
        printf("%d\n", a+b);
    }

    
    return 0;
}