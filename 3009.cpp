#include <stdio.h>

int main(){
	int x[1001] = {0};
	int y[1001] = {0};

	for(int i = 0; i < 3; i++){
		int a, b;
		scanf("%d %d", &a, &b);

		x[a] = !x[a];
		y[b] = !y[b];
	}
	for(int i = 0; i < 1001; i++){
		if(x[i] == 1) printf("%d ", i);
	}
	for(int i = 0; i < 1001; i++){
		if(y[i] == 1) printf("%d\n", i);
	}

	return 0;
}