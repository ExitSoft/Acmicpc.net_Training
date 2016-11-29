#include <stdio.h>

int rev(int n){
	int result = 0;
	while(n != 0){
		result *= 10;
		result += n % 10;
		n /= 10;
	}

	return result;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", rev(rev(a)+rev(b)));
	return 0;
}