#include "stdio.h"

int arr[5] = {0};

int main(){
	int max = 0;
	for(int i = 1; i <= 4; i++){
		int a,b;
		scanf("%d %d", &b, &a);
		arr[i] = arr[i-1] + a;
		arr[i] -= b;
		if(max < arr[i]) max = arr[i];
	}
	printf("%d\n", max);
	return 0;
}