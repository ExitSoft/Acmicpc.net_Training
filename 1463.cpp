#include <stdio.h>

int d[1000001];

int min(int a, int b){
	if(a == -1) return b;
	if(b == -1) return a;
	return (a < b)? a : b;
}

int main(){
	int n;
	scanf("%d", &n);
	d[0] = 0;
	d[1] = 0;
	d[2] = 1;

	for(int i = 3; i <= n; i++){
		int a = -1, b = -1, c = -1;
		if(i%3 == 0) a = d[i/3];
		if(i%2 == 0) b = d[i/2];
		c = d[i-1];

		d[i] = min(a, min(b, c)) + 1;
	}
	printf("%d\n", d[n]);

	
	return 0;
}