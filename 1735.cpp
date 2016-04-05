#include <stdio.h>

int gcd(int x, int y){
	int t = x;
	x = y;
	y = t % y;
	if(y == 0){
		return x;
	}
	return gcd(x,y);
}

int main(){
	// a/b x/y
	int a, b;
	int x, y;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &x, &y);

	int lcm = (b * y) / gcd(b,y);

	int result_a = a*(lcm/b) + x*(lcm/y);
	int result_b = lcm;

	if(result_a % result_b == 0){
		
	}

	printf("%d %d\n", a*(lcm/b) + x*(lcm/y), lcm);
	return 0;
}