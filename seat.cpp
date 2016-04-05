#include <stdio.h>

int seat[1000] = {0};
int cache[1000] = {0};

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	while(m--){
		int temp;
		scanf("%d", &temp);
		seat[temp] = 1;
	}

	cache[0] = 1;
	cache[1] = 1;
	for(int i = 2; i <= n; i++){
		if(seat[i] || seat[i-1]) cache[i] = cache[i-1];
		else cache[i] = cache[i-1] + cache[i-2];
	}

	printf("%d\n", cache[n]);




	return 0;
}