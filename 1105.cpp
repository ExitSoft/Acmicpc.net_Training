#include <stdio.h>

int min(int a, int b){
	return a < b? a : b;
}

int func(int n){
	int count = 0;
	while(n != 0){
		int t = n % 10;
		if(t == 8) count++;
		n /= 10;
	}
	return count;
}

int main(){
	int l,r;
	int res;
	scanf("%d %d", &l, &r);
	for(int i = l; i <= r; i++){
		int count = func(i);
		if(i == l) res = count;
		else res = min(res, count);
	}
	printf("%d\n", res);
	return 0;
}