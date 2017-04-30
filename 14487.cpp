#include <stdio.h>

int main(){
	int n;
	int max = 0;
	int sum = 0;
	int map[50001];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &map[i]);
		sum += map[i];
		if(map[i] > max) max = map[i];
	}
	printf("%d\n", sum-max);


	return 0;
}