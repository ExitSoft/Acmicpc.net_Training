#include "stdio.h"

int n;
int count = 0;

bool isprime(int n){
	if(n == 1) return false;
	for(int i = 2; i < n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	scanf("%d", &n);
	while(n--){
		int tmp;
		scanf("%d", &tmp);
		if(isprime(tmp)) count++;
	}
	printf("%d\n", count);

	return 0;
}