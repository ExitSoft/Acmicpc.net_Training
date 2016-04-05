#include <stdio.h>
#define MOD 10007

int cache[1005] = {0};

int func(int n){
	if(n % 2 == 1) return 2*func(n-1);
	if(n == 1) return 1;
	if(n == 2) return 3;

	
}

int main(){
	int n;
	scanf("%d", &n);


	return 0;
}