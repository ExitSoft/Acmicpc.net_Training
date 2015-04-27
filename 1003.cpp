#include <stdio.h>

int one[100000] = {0};
int zero[100000] = {0};

int fibo(int n, int i) {
	if (n==0) {
		// printf("0");
		zero[i] += 1;
		return 0;
	} else if (n==1) {
		// printf("1");
		one[i] += 1;
		return 1;
	} else {
		return fibo(n-1, i) + fibo(n-2, i);
	}
}
int main(void){

	int n;
	int count;
	scanf("%d",&count);

	for(int i = 0; i < count; i++){
		scanf("%d",&n);	
		fibo(n, i);
	}
	
	for (int i = 0; i < count; ++i)
	{
		printf("%d %d\n", zero[i], one[i]);

	}

	return 0;
}
