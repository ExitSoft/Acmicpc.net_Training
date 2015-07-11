#include <stdio.h>
#include <stdlib.h>

int main (){
	int input;
	int num = 1;
	for(int i = 0; i < 3; i++){
		scanf("%d", &input);
		num *= input;
	}
	int arr[10] = {0};
	while(num != 0){
		int temp = num % 10;
		num /= 10;
		arr[temp]++;
	}

	for(int i = 0; i < 10; i++){
		printf("%d\n", arr[i]);
	}

	return 0;
}