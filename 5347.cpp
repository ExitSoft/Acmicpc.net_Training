#include "stdio.h"
long a,b;

long gcd(long x, long y){
	long t = x;
	x = y;
	y = t % y;

	if(y == 0){
		return x;
	}
	return gcd(x,y);
}

int main(){
	int num;
	scanf("%d",&num);

	for(int i = 0; i < num; i++){
		scanf("%ld %ld", &a, &b);
		printf("%ld\n", (a*b) /gcd(a,b));

	}

	return 0;
}