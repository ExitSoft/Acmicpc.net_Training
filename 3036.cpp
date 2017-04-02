#include <stdio.h>

int gcd(int p, int q){
	return (q == 0)? p : gcd(q, p%q);
}

int main(){
	int n;
	int pivot;
	scanf("%d %d", &n, &pivot);
	n--;
	while(n--){
		int input;
		scanf("%d", &input);
		int g = gcd(pivot, input);
		printf("%d/%d\n", pivot/g, input/g);
	}
	return 0;
}