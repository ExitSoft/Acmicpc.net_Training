#include <stdio.h>

int cache[10001];

void d(int n){
	int result = n;
	while(n > 0){
		result += n % 10;
		n /= 10;
	}
	if(result > 10000) return;
	cache[result] = 1;
	return d(result);
}

int main(){
	for(int i = 1; i <= 10000; i++) d(i);
	for(int i = 1; i <= 10000; i++){
		if(!cache[i]) printf("%d\n", i);
	}
	return 0;
}