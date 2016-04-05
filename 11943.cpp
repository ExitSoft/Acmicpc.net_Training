#include <stdio.h>

int min(int a, int b){
	return (a < b)? a : b;
}

int main(){
	int a, b, c ,d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	printf("%d\n", min(a+d, b+c));
	return 0;
}