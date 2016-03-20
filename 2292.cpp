#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	n--;
	int cnt = 1;
	while(true){
		if(n <= 0) break;
		n -= cnt * 6;
		cnt++;
	}
	printf("%d\n", cnt);


	return 0;
}