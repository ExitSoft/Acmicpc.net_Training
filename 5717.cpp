#include <stdio.h>

int main(){
	while(1){
		int n,m;
		scanf("%d %d", &n, &m);
		if(n == 0 && m == 0) break;
		printf("%d\n", n+m);
	}
	return 0;
}