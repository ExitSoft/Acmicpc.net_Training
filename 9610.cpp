#include <stdio.h>

int main(){
	int q[4] = {0};
	int axis = 0;
	int n;
	scanf("%d", &n);
	while(n--){
		int x, y;
		scanf("%d %d", &x, &y);
		if(x == 0 || y == 0) axis++;
		else if(x > 0 && y > 0) q[0]++;
		else if(x < 0 && y > 0) q[1]++;
		else if(x < 0 && y < 0) q[2]++;
		else if(x > 0 && y < 0) q[3]++;
	}

	for(int i = 0; i < 4; i++) printf("Q%d: %d\n",i+1, q[i]);
	printf("AXIS: %d\n", axis);

	return 0;
}