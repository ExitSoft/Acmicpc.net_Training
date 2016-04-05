#include <stdio.h>
#define MOD 100000003

int n, k, cache[1001][1001][2] = {0};

int func(int i, int selected, int first){
	// printf("?\n");
	if(selected == k) return 1;
	if(i >= n) return 0;

	int& ret = cache[i][selected][first]; if(ret != -1) return ret;
	ret = 0;

	if(i == n-1){
		if(first == 1) return 0;
		ret = (func(i+1, selected+1, first) + func(i+1, selected, first)) % MOD;
		return ret;
	}

	if(i == 0) ret = (ret = + func(i+1, selected+1, 1)) % MOD;
	else ret = (ret + func(i+2, selected+1, first)) % MOD;

	if(i == 0) ret = (ret + func(i+1, selected, 0)) % MOD;
	else ret = (ret + func(i+1, selected, first)) % MOD;

	return ret;

}

int main(){
	
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++){
		// for(int j = 0; j <= k; j++){
			func(i, k, 0);
			func(i, k, 1);
		// }
	}
	// func(0, 0, 0);
	printf("%d\n", cache[n-1][k-1][1]);
	return 0;
}