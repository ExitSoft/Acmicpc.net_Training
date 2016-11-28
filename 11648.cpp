#include <stdio.h>

int main(){
	int n, result;
	int count = 0;
	scanf("%d", &n);
	result = n;
	while(result >= 10){
		count++;
		result = 1;
		while(n != 0){
			result *= n%10;
			n /= 10;
		}
		n = result;
	}
	printf("%d\n", count);

	return 0;
}