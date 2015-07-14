#include "stdio.h"

int main(){
	float arr[10000] = {0};
	int len = 0;
	while(arr[len-1] != 999.0){
		scanf("%f",&arr[len++]);
	}
	for(int i = 0; i < len-2; i++){
		printf("%.2f\n", arr[i+1] - arr[i]);
	}
	return 0;
}