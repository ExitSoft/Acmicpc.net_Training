#include <stdio.h>

int main(){
	int sum = 0;
	int tmp = 0;
	for(int i = 0; i < 4; i++){
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("%d\n", sum / 60);
	printf("%d\n", sum % 60);
	

	return 0;
}