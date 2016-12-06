#include <stdio.h>

int cache[10001] = {0};

int func(int n){
	int result = n;
	while(n != 0){
		result += (n % 10);
		n /= 10;
	}
	return result;
}

int main(){
	for(int i = 0; i < 10000; i++){
		int tmp = func(i);
		if(tmp <= 10000) cache[tmp] = 1;
	}
	for(int i = 0; i < 10000; i++){
		if(cache[i] == 0) printf("%d\n", i);
	}
	
	return 0;
}