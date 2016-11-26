#include <stdio.h>

int main(){
	int a[2] = {0};
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 4; j++){
			int tmp;
			scanf("%d", &tmp);
			a[i] += tmp;
		}
	}
	printf("%d\n", (a[0] > a[1])? a[0] : a[1]);
	return 0;
}