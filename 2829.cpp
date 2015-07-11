#include <stdio.h>

int main(){
	int num;
	int arr[1000][1000];
	scanf("%d",&num);

	for(int i = 0; i <  num; i++){
		for(int j = 0; j < num; j++){
			scanf("%d",&arr[i][j]);
		}
	}

	int a = 0;
	for(int i = 0; i < num; i++){
		a += arr[i][i];
	}
	int b = 0;
	for(int i = 0; i < num; i++){
		b += arr[i][num-1-i];
	}

	printf("%d\n", a-b);

	return 0;
}