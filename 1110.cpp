#include "stdio.h"

int n;

int func(int front, int back, int c){
	int t = front + back;

	if(back == n / 10 && t % 10 == n % 10) return c;
	return func(back, t%10, c+1);
}

int main(){
	scanf("%d", &n);
	printf("%d\n",func(n/10, n%10, 1));

	return 0;
}