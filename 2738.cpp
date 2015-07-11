#include <stdio.h>

int main(){
	int arr1[100][100] = {0};
	int arr2[100][100] = {0};

	int x,y;

	scanf("%d %d", &x, &y);
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			scanf("%d", &arr2[i][j]);
		}
	}

	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}



	return 0;
}