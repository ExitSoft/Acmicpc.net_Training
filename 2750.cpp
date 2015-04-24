#include <stdio.h>

int main(void){

	int count, temp;
	scanf("%d",&count);
	int *arr = new int[count];

	for(int i = 0; i < count; i++){
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < count-1; i++){
		for(int j = 0; j < count-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < count; i++){
		printf("%d\n", arr[i]);
	}

	return 0;
}