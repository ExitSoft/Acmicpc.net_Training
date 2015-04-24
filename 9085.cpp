#include <stdio.h>

int main (void){

	int test_case, loop, input, result = 0;
	scanf("%d", &test_case);


	for(int i = 0; i < test_case; i++){
		scanf("%d", &loop);
		for(int j = 0; j <loop; j++){
			scanf("%d", &input);
			result += input;
		}
		printf("%d\n", result);
		result = 0;
	}



	return 0;
}