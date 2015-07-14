#include "stdio.h"

int main(){
	int arr[] = {1,1,2,2,2,8};
	int input[10];
	for(int i = 0; i < 6; i++){
		scanf("%d",&input[i]);
		printf("%d ", arr[i] - input[i]);
	}
	printf("\n");

	return 0;
}