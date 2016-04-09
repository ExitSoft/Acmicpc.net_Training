#include <stdio.h>

int main(){
	int n, money;
	int coin[101];
	int d[10001];
	d[0] = 1;
	scanf("%d %d", &n, &money);
	for(int i = 0; i < n; i++) scanf("%d", &coin[i]);
	for(int i = 0; i < n; i++){
		for(int j = coin[i]; j <= money; j++){
			d[j] += d[j-coin[i]];
		}
	}
	printf("%d\n", d[money]);

	return 0;
}