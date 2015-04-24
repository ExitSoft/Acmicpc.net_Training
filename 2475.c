#include <stdio.h>

int main(){
	int a[5] = {};
	int sum = 0;
	int i;

	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	for (i = 0; i < 5; i++){
		sum = sum + (a[i]*a[i]);
	}
	printf("%d\n", sum % 10);

	return 0;
}