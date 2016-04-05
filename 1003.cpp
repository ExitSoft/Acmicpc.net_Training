#include <stdio.h>
 
int zero = 0;
int one = 0;
 
 
 
int fibo(int n){
    if(n == 0){
        zero++;
        return 0;
    }
    else if(n == 1){
        one++;
        return 1;
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }
}
 
int main(){
    int count;
    scanf("%d", &count);
    while(count--){
        int input;
        scanf("%d", &input);
        zero = 0;
        one = 0;
        fibo(input);
        printf("%d %d\n", zero, one);
    }
    return 0;
}