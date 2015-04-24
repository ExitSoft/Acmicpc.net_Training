#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){
	if (a >= b)
		return a;
	else
		return b;
}
int min(int a, int b){
	if (a <= b)
		return a;
	else
		return b;
}

int gcd(int a, int b){
	int max_num = max(a, b);
	int min_num = min(a, b);

	if (a % b == 0){
		return b;
	}
	else{
		return gcd(b,a % b);
	}
}

int main(){
	int size;
	int gcd_num, lcm_num;
	int **arr;

	arr = (int**)malloc(sizeof(int*)*size);

	scanf("%d",&size);

	for (int i = 0; i < size; i++){
		arr[i] = (int*)malloc(sizeof(int)*2);
		scanf("%d %d",&arr[i][0], &arr[i][1]);
	}

	for (int i = 0; i < size; i++){

		// for (int j = 1; j < max(arr[i][0], arr[i][1])+1; j++){
		// 	if (arr[i][0] % j == 0 && arr[i][1] % j == 0){
		// 		gcd = j;
		// 	}
		// }

		gcd_num = gcd(arr[i][0], arr[i][1]);
		lcm_num = (arr[i][0] * arr[i][1])/gcd_num;
		printf("%d\n", lcm_num);
	}
	return 0;
}