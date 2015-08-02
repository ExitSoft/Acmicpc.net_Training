#include "stdio.h"

int ball_count;
int num;
int arr[10000] = {0};

int main(){

	scanf("%d %d", &ball_count, &num);
	for(int i = 0; i < num; i++){
		int start;
		int end;
		int ball_num;
		scanf("%d %d %d", &start, &end, &ball_num);
		for(int j = start; j <= end; j++){
			arr[j] = ball_num;
		}
	}

	for(int i = 1; i <= ball_count; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}