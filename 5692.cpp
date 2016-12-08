#include <stdio.h>

int factorial(int n){
	if(n == 1) return 1;
	return n * factorial(n-1);
}

int cal(int n){
	int result = 0;
	int count = 0;
	while(n != 0){
		count++;
		result += ((n % 10) * factorial(count));
		n /= 10;
	}
	return result;
}

int main(){

	while(1){
		int n;
		scanf("%d", &n);
		if(n == 0) break;
		printf("%d\n", cal(n));
	}
	return 0;
}