#include "stdio.h"
#define SIZE 25000
#define MAP_SIZE 5000

int arr[MAP_SIZE][MAP_SIZE] = {0};
// int visited[5000][5000] = {0};
int r1, c1, r2, c2;
int count = 1;

void func(int x, int y, int v){
	// printf("x = %d y = %d v = %d\n", x,y,v);
	arr[x][y] = count++;
	// visited[x][y] = 1;
	// v = v % 4;
	// count++;

	if(count == SIZE){
		return;
	}
	// 오른쪽
	if(v == 0){
		if(!arr[x][y+1]){
			v++;
			y++;
			return func(x, y, v%4);

		}
		// else{
		// 	v--;
		// }

	}
	// 위로
	else if(v == 1){
		if(!arr[x-1][y]){
			v++;
			x--;
			return func(x, y, v%4);

		}
		// else{
		// 	v--;
		// }


	}
	// 왼쪽
	else if(v == 2){
		if(!arr[x][y-1]){
			v++;
			y--;
			return func(x, y, v%4);

		}
		// else{
		// 	v--;
		// }


	}
	// 아래
	else if(v == 3){
		if(!arr[x+1][y]){
			v++;
			x++;
			return func(x, y, v%4);

		}
		// else{
		// 	v--;
		// }

	}


	if(v == 0){

		// if(!arr[x+1][y]){
		// 	v++;
		// }
		x++;
		// y++;
		// v = 3;

	}
	// 위로
	else if(v == 1){
		// if(!visited[x][y+1]){
		// 	v++;
		// }
		// arr[x][y+1] = count;
		// func(x, y+1, v);
		// x--;
		// v = 0;
		y++;
	}
	// 왼쪽
	else if(v == 2){
		// if(!visited[x-1][y]){
		// 	v++;
		// }
		// arr[x-1][y] = count;
		// func(x-1, y, v);
		x--;
		// y--;
		// v = 1;

	}
	// 아래
	else if(v == 3){
		// if(!visited[x][y-1]){
		// 	v++;
		// }
		// arr[x][y-1] = count;
		// func(x, y-1, v);
		y--;
		// x++;
		// v = 2;

	}

	// visited[x][y] = 1;
	func(x, y, v%4);


}

int main(){
	
	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
	r1 += MAP_SIZE/2;
	c1 += MAP_SIZE/2;
	r2 += MAP_SIZE/2;
	c2 += MAP_SIZE/2;

	func(MAP_SIZE/2,MAP_SIZE/2,0);

	// for(int i = 0; i < 50; i++){
	// 	for(int j = 0; j < 50; j++){
	// 		printf("%4d ", arr[i][j]);
	// 	}
	// 	printf("\n");
	// }

	// printf("\n");
	int max = arr[r2][c1];
	// printf("max = %d\n", max);
	// int c = 0;
	// while(max != 0){
	// 	max /= 10;
	// 	c++;
	// }
	for(int i = r1; i <= r2; i++){
		for(int j = c1; j <= c2; j++){
			if(max < 10){
				printf("%2d", arr[i][j]);
			}
			else if(max < 100){
				// printf("?\n");
				printf("%3d", arr[i][j]);

			}
			else if(max < 1000){
				printf("%4d", arr[i][j]);

			}
			else if(max < 10000){
				printf("%5d", arr[i][j]);

			}
			else if(max < 100000){
				printf("%6d", arr[i][j]);
			}
			else if(max < 1000000){
				printf("%7d", arr[i][j]);
			}
			else{
				printf("%8d", arr[i][j]);

			}
		}
		printf("\n");
	}

	return 0;
}