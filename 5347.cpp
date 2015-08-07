#include "stdio.h"
long long a,b;
 
long long gcd(long long x, long long y){
	long long t = x;
	x = y;
	y = t % y;
 
	if(y == 0){
		return x;
	}
	return gcd(x,y);
}
 
int main(){
	long long num;
	scanf("%lld",&num);
 
	for(int i = 0; i < num; i++){
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", (a*b) /gcd(a,b));
 
	}
 
	return 0;
}