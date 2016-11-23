#include <stdio.h>

int main(){
	int n, k;
	int coin[101], cache[10001] = {0};
	cache[0] = 1;

	for(int i = 0; i < n; i++) scanf("%d", &coin[i]);

	for(int i = 0; i < n; i++){
		for(int j = 0; j <= k; j++){
			if(j >= coin[i]) cache[j] += cache[j - coin[i]];
		}
	}

	printf("%d\n", cache[k]);

	
	return 0;
}
