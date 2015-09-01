#include "stdio.h"

int main(){
	int n;
	int sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int a,b;
		scanf("%d %d",&a, &b);
		sum += b % a;
	}
	printf("%d\n", sum);
	return 0;
}