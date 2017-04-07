#include <stdio.h>

int main(){
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%.9f\n", (double)a/b);
	return 0;
}