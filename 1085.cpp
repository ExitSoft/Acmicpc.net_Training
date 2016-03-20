#include "stdio.h"
#define min(a,b) a>b?b:a

int x,y;
int box_x, box_y;

int min_x, min_y;


int cal(int x, int box){
	return (x > box/2)? x : box-x;
}

int main(){

	scanf("%d %d %d %d", &x, &y, &box_x, &box_y);


	if(x <= box_x/2){
		min_x = x;
	}
	else{
		min_x = box_x - x;
	}

	if(y <= box_y/2){
		min_y = y;
	}
	else{
		min_y = box_y - y;
	}

	printf("%d\n", (min_x < min_y)? min_x : min_y);
	// printf("%d\n", min(cal(x,box_x), cal(y,box_y)));

	return 0;
}