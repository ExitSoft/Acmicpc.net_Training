#include <stdio.h>

int main(void){

	int temp;
	int arr[5] = {3, 7, 2, 5, 6};

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){

			if(arr[j+1] < arr[j]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
					
			}

		}

	}

	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}