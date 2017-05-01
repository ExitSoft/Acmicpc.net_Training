#include <stdio.h>

int m, n;
int cache[1001][1001];

int main(){
	cache[1][1] = 1;
	scanf("%d %d", &m, &n);
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(i > 1){
				cache[i][j] += cache[i-1][j];
				cache[i][j] %= 1000000007;
				if(j > 1){
					cache[i][j] += cache[i-1][j-1];
					cache[i][j] %= 1000000007;
				} 
			}
			if(j > 1){
				cache[i][j] += cache[i][j-1];
				cache[i][j] %= 1000000007;
			} 
		}
	}
	printf("%d\n", cache[m][n]);

	return 0;
}