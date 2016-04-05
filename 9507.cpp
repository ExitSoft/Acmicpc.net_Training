#include <stdio.h>
#define MAX 1000

long long cache[MAX] = {0};

void init(){
	for(int i = 0; i < MAX; i++) cache[i] = 0;

	cache[0] = 1;
	cache[1] = 1;
	cache[2] = 2;
	cache[3] = 4;

}

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		init();
		int n;
		scanf("%d", &n);
		for(int i = 4; i <= n; i++){
			cache[i] = cache[i-1] + cache[i-2] + cache[i-3] + cache[i-4];
		}
		printf("%lld\n", cache[n]);
	}

	return 0;
}