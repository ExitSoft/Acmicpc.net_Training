#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long first = 0;
	long long second = 1;
	if(n == 1){
			printf("%lld\n", first);
			return 0;
		}
	else if(n == 2){
		printf("%lld\n", second);
		return 0;
	}
	for(int i = 1; i < n; i++){

		long long tmp = first;
		first = second;
		second += tmp;
		
	}
	printf("%lld\n", second);

	return 0;
}