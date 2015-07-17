#include "stdio.h"

#define MAP_SIZE 1000

int arr[MAP_SIZE][MAP_SIZE] = {0};
int count = 1;
int num;

void func(int x, int y, int v){
	arr[x][y] = count++;

	if(count > num*num){
		return;
	}
	// 위로
	if(v == 0){
		if(!arr[x-1][y]){
			v++;
			x--;
			return func(x, y, v%4);

		}

	}
	// 오른쪽
	else if(v == 1){
		if(!arr[x][y+1]){
			v++;
			y++;
			return func(x, y, v%4);

		}
	}
	// 아래
	else if(v == 2){
		if(!arr[x+1][y]){
			v++;
			x++;
			return func(x, y, v%4);

		}
	}
	// 왼쪽
	else if(v == 3){
		if(!arr[x][y-1]){
			v++;
			y--;
			return func(x, y, v%4);

		}
	}

	// 위
	if(v == 0){
		y--;
	}
	// 오른쪽
	else if(v == 1){
		x--;
	}
	// 아래
	else if(v == 2){
		y++;
	}
	// 왼쪽
	else if(v == 3){
		x++;
	}

	func(x, y, v%4);


}

int main(){

	int target;
	int tmp_x;
	int tmp_y;
	scanf("%d",&num);
	scanf("%d",&target);

	func(num/2,num/2,0);

	for(int i = 0; i < num; i++){
		for(int j = 0; j < num; j++){

			if(arr[i][j] == target){
				tmp_x = i;
				tmp_y = j;
			}

			if(j != num -1){
				printf("%d ", arr[i][j]);
			}
			else{
				printf("%d", arr[i][j]);	
			}
		}
		printf("\n");
	}
	printf("%d %d\n", tmp_x+1, tmp_y+1);

	return 0;
}