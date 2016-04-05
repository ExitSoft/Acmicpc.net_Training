#include <stdio.h>

int arr[10005] = {0};
long long cache[10005][2] = {0};
int cnt;

int max(int n, int m){
	return (n > m)? n : m;
}

void cache_print(){
	for(int i = 0; i < cnt; i++){
		printf("%3lld", cache[i][0]);
	}
	putchar('\n');
	for(int i = 0; i < cnt; i++){
		printf("%3lld", cache[i][1]);
	}
	putchar('\n');
}


int main(){
	
	scanf("%d", &cnt);
	for(int i = 0; i < cnt; i++){
		scanf("%d", &arr[i]);
	}
	cache[0][0] = arr[0];
	cache[1][0] = arr[0] + arr[1];
	cache[1][1] = arr[1];
	long long max_v = max(cache[0][0], max(cache[1][0], cache[1][1]));
	for(int i = 2; i < cnt; i++){
		// printf("arr %d\n", arr[i]);
		cache[i][0] = cache[i-1][1] + arr[i];
		cache[i][1] = max(cache[i-2][0], cache[i-2][1]) + arr[i];
		max_v = max(max_v, max(cache[i][0], cache[i][1]));
	}
	// cache_print();
	printf("%lld\n", max_v);

	return 0;
}