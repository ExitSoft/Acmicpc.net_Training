#include <stdio.h>

int main(){
	int matrixA[101][101];
	int matrixB[101][101];
	int res_matrix[101][101] = {0};

	int a_x, a_y;
	scanf("%d %d", &a_x, &a_y);
	for(int i = 0; i < a_x; i++)
		for(int j = 0; j < a_y; j++)
			scanf("%d", &matrixA[i][j]);

	int b_x, b_y;
	scanf("%d %d", &b_x, &b_y);
	for(int i = 0; i < b_x; i++)
		for(int j = 0; j < b_y; j++)
			scanf("%d", &matrixB[i][j]);


	for(int i = 0; i < a_x; i++){
		for(int j = 0; j < b_y; j++){

			for(int k = 0; k < a_y; k++){
				res_matrix[i][j] += matrixA[i][k] * matrixB[k][j];
				
			}

		}
	}

	for(int i = 0; i < a_x; i++){
		for(int j = 0; j < b_y; j++){
			printf("%d ", res_matrix[i][j]);
		}
		putchar('\n');
	}

	
	return 0;
}