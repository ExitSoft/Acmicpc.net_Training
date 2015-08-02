#include "stdio.h"

int x,y;
int box_x, box_y;

int main(){

	scanf("%d %d %d %d", &x, &y, &box_x, &box_y);

	int min = 9999;

	if(x < box_x/2){
		// printf("%d ", x);
		if(min > x){
			min = x;
		}
	}
	else{
		// printf("%d ", box_x - x);
		if(min > box_x - x){
			min = box_x - x;
		}
	}

	if(y < box_y/2){
		// printf("%d\n", y);
		if(min > y){
			min = y;
		}
	}
	else{
		// printf("%d\n", box_y - y);
		if(min > box_y - y){
			min = box_y - y;
		}
	}
	printf("%d\n", min);
	return 0;
}