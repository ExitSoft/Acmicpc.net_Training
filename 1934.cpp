#include "stdio.h"

int func(int a, int b){
	int t = a;
	a = b;
	b = t % b;
	if(b == 0){
		return a;
	}
	return func(a, b);
}

int main(){
	int nCount;
	scanf("%d", &nCount);
	while(nCount--){
		int x,y;
		scanf("%d %d", &x, &y);
		printf("%d\n", (x*y)/func(x,y));
	}
	return 0;
}