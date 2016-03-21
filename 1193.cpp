#include <stdio.h>

int result_x, result_y;

void func(int x, int y, int n, int direction){
	if(n == 1){
		result_x = x;
		result_y = y;
		return;
	}
	// down
	if(direction == 0){
		if(y == 1){
			return func(x+1, y, n-1, 1);
		}
		else{
			return func(x+1, y-1, n-1, 0);
		}
	}
	// up
	else if(direction == 1){
		if(x == 1){
			return func(x, y+1, n-1, 0);
		}
		else{
			return func(x-1, y+1, n-1, 1);
		}

	}

}

int main(){
	int n;
	scanf("%d", &n);
	func(1,1,n,1);
	printf("%d/%d\n", result_x, result_y);
	return 0;
}