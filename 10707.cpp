#include <stdio.h>

int main(){
	int a = 0, b = 0;
	int std_b, limit_b, per_b;
	int p;

	scanf("%d %d %d %d %d", &a, &std_b, &limit_b, &per_b, &p);
	a *= p;
	if(p < limit_b) b = std_b;
	else{
		b = std_b + (p - limit_b) * per_b; 
	}

	printf("%d\n", (a < b)? a : b);


	return 0;
}