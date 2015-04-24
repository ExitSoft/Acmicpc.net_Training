#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	scanf("%d", &size);
	int **arr;
	arr = (int**)malloc(sizeof(int*)*size);
	for(int i = 0; i < size; i++){
		arr[i] = (int*)malloc(sizeof(int)*2);
	}

	for(int i = 0; i < size; i++){
		for(int j = 0; j < 2; j++){
			arr[i][j] = 1;
		}
	}

	for(int i = 0; i < size; i++){
		for(int j = 0; j < 2; j++){
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
`