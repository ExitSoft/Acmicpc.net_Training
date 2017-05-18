#include <stdio.h>
#define SIZE 1001

int main(){
	int n = 4;
	int map[SIZE][SIZE] = {0};

	while(n--){
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for(int i = x1; i < x2; i++){
			for(int j = y1; j < y2; j++){
				map[i][j] = 1;
			}
		}
	}

	int c = 0;

	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < SIZE; j++){
			if(map[i][j] == 1) c++;
		}
	}
	
	printf("%d\n", c);

	return 0;
}