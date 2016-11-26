#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < 5; i++){
		int tmp;
		scanf("%d", &tmp);
		printf("%d ", tmp - n*m);
	}
	putchar('\n');
	return 0;
}