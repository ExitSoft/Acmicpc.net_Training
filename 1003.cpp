#include <stdio.h>

// int *one = new int[count];
// int *zero = new int[count];
int one[100000] = {0};
int zero[100000] = {0};
// int fibo_zero(int n, int zero_count){
// 	if(n == 0){
// 		zero_count += 1;
// 		return zero_count;
// 	}
// 	else if(n == 1){
// 		return 0;
// 	}
// 	else{
// 		return fibo_zero(n-1, zero_count) + fibo_zero(n-2, zero_count);
// 	}
// }

// int fibo_one(int n, int one_count){
// 	if(n == 0){
// 		return 0;
// 	}
// 	else if(n == 1){
// 		one_count += 1;
// 		return one_count;
// 	}
// 	else{
// 		return fibo_one(n-1, one_count) + fibo_one(n-2, one_count);
// 	}
// }

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