#include <stdio.h>
#define SWAP(A, B){int t = A; A = B; B = t;}

int matrix[2][2];

void rotateMatrix(){

	int t = matrix[0][1];
	matrix[0][1] = matrix[0][0];
	int t2 = matrix[1][1];
	matrix[1][1] = t;
	t = matrix[1][0];
	matrix[1][0] = t2;
	matrix[0][0] = t;

}

float calculate(){
	return float(matrix[0][0])/float(matrix[1][0]) + float(matrix[0][1])/float(matrix[1][1]);
}


int main(){
	int count = 0;
	float max = 0;

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			scanf("%d", &matrix[i][j]);

	for(int i = 0; i < 4; i++){
		if(max < calculate()){
			max = calculate();
			count = i;
		}
		rotateMatrix();

	}
	
	printf("%d\n", count);

	return 0;
}