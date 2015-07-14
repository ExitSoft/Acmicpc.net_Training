#include "stdio.h"

int main(){
	long long a,b;
	scanf("%lld %lld", &a, &b);
	if(a > b){
		int t = a;
		a = b;
		b = t;
	}
	long long result = (b*(b+1)/2 - a*(a-1)/2);

	printf("%lld\n", result);
	return 0;
}