#include "stdio.h"

int main(){
	int n,x;
	scanf("%d %d", &n, &x);
	while(n--){
		int t;
		scanf("%d", &t);
		if(t < x) printf("%d ", t);
	}
	printf("\n");
}