#include <stdio.h>

int d[10001];

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		d[0] = 1;
		int coin_count;
		int coin[20];
		int money;
		scanf("%d", &coin_count);
		for(int i = 0; i < coin_count; i++) scanf("%d", &coin[i]);
		scanf("%d", &money);
		for(int i = 1; i <= money; i++) d[i] = 0;
		for(int i = 0; i < coin_count; i++){
			for(int j = coin[i]; j <= money; j++){
				d[j] += d[j - coin[i]];
			}
		}

		printf("%d\n", d[money]);



	}
	return 0;
}