#include "stdio.h"

int arr[1010] = {0};

int main(){
	int n,m;
	scanf("%d %d",&n, &m);
	for(int i = 0; i < m; i++){
		int a,b;
		scanf("%d %d", &a, &b);
		arr[a]++;
		arr[b]++;
	}
	for(int i = 1; i <= n; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}