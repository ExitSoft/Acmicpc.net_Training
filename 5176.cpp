#include <stdio.h>

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		int n, m;
		int result = 0;
		int cache[501] = {0};
		scanf("%d %d", &n, &m);

		for(int i = 0; i < n; i++){
			int input;
			scanf("%d", &input);
			if(cache[input]  == 0){
				cache[input] = 1;
			}
			else result++;
		}

		printf("%d\n", result);

	}
	return 0;
}