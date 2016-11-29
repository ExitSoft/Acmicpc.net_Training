#include <stdio.h>

int abs(int n){
	return (n < 0)? -n : n;
}

int main(){
	while(1){
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(a == 0 && b == 0 && c == 0 && d == 0) break;
		printf("%d %d\n", abs(b-c), abs(a-d));
	}
	return 0;
}