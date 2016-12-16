#include <stdio.h>

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", (x-y)*y+1);
	}
	return 0;
}