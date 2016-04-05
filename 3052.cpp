#include <stdio.h>

int main(){
	// int input[20];
	int result[100] = {0};
	for(int i = 0; i < 10; i++){
		int input;
		scanf("%d", &input);
		result[input%42] = 1;
	}
	int cnt = 0;

	for(int i = 0; i < 100; i++){
		if(result[i] == 1) cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}