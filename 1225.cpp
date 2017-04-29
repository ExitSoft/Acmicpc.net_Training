#include <stdio.h>
#include <string.h>

int main(){
	char n[10001], m[10001];
	scanf("%s %s", n, m);
	long long a = 0, b = 0;
	int len_n = strlen(n);
	int len_m = strlen(m);

	for(int i = 0; i < len_n; i++){
		a += n[i] - '0';
	}
	for(int i = 0; i < len_m; i++){
		b += m[i] - '0';
	}
	
	printf("%lld\n", a*b);


	return 0;
}