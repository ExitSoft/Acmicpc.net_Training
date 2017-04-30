#include <stdio.h>

int gcd(int a, int b){
	return b? gcd(b, a%b): a;
}

int main(){
	int a, b;
	scanf("%d:%d", &a, &b);
	int get_gcd = gcd(a, b);
	printf("%d:%d\n", a/get_gcd, b/get_gcd);
	return 0;
}