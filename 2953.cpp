#include "stdio.h"

int main(){
	int arr[5] = {0};
	int max_index = 0;
	int max = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			int temp;
			scanf("%d", &temp);
			arr[i] += temp;
		}
		if(max < arr[i]){
			max_index = i+1;
			max = arr[i];
		}
	}
	printf("%d %d\n", max_index, max);

	return 0;
}