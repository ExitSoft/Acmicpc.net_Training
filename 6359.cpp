#include <stdio.h>
#define MAX 105

int cache[MAX] = {0};

void init(){
	for(int i = 0; i < MAX; i++){
		cache[i] = 0;
	}
}

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		init();

		int n;
		scanf("%d", &n);

		for(int i = 1; i <= n; i++){
			int cnt = i;
			while(cnt <= n){
				cache[cnt] = (cache[cnt])? 0 : 1;
				cnt += i;
			}
		}
		int count = 0;
		for(int i = 1; i <= n; i++){
			if(cache[i]) count++;
		}
		printf("%d\n", count);



	}
	return 0;
}