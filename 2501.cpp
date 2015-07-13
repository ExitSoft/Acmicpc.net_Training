#include "stdio.h"

int main(){
	int num, k;
	int count = 0;
	int result;
	scanf("%d %d", &num, &k);

	for(int i = 1; i <= num; i++){
		if(num % i == 0)
			count++;
		if(count == k){
			result = i;
			break;
		}
	}
	if(count < k){
		printf("%d\n", 0);
	}
	else{
		printf("%d\n", result);
	}
	return 0;
}