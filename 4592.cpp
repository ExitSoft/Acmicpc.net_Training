#include <stdio.h>


int main(){
	while(1){
		int n;
		int input[51];
		int count = 0;

		scanf("%d", &n);
		if(n == 0) break;
		for(int i = 0; i < n; i++){
			scanf("%d", &input[count]);
			if(count > 0){
				if(input[count] != input[count-1]) count++;
			}
			else if(count == 0) count++;
		}

		for(int i = 0; i < count; i++){
			printf("%d ", input[i]);
		}
		printf("$\n");
	}
	return 0;
}