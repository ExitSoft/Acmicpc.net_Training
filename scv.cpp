#include <stdio.h>

int map[1000][1000] = {0};
int cache[1000][1000] = {0};
int n;

int max(int n, int m){
	return (n > m)? n : m;
}

int main(){
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &map[i][j]);
		}
	}

	for(int i = 0; i < n; i++){
		

	}
	return 0;
}