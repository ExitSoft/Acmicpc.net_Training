#include <stdio.h>

int main(){
	int nCount;
	scanf("%d", &nCount);
	for(int i = 0; i < nCount; i++){
		int a,b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i+1, a+b);
	}
	return 0;
}