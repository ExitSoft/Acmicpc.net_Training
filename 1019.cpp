#include <stdio.h>
#include <math.h>


long long count[10] = {0};

int cahche[20000] = {0};

int get_len(int n, int l){
	if(n <= 0) return l;
	return get_len(n/10, l+1);
}

void func(int n){
	if(n <= 0) return;
	count[n%10]++;
	return func(n/10);
}

void func2(int n){
	int len = get_len(n, 0);
	int first_num = n / (int)(pow(10, len));
	for(int i = 1; i <= 9; i++){
		count[i] += (len-1) * (int)(pow(10,len-1));
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i<= n; i++) func(i);
	
	printf("len : %d\n", get_len(n, 0));
	printf("%d\n", (int) pow(10, get_len(n,0)-1));
	for(int i = 0; i < 10; i++){
		printf("%lld ", count[i]);
	}
	putchar('\n');

	return 0;
}