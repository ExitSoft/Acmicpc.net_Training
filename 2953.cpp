#include <stdio.h>

int main(){
	int max = 0, max_index = 0;
	for(int i = 0; i < 5; i++){
		int sum = 0;
		for(int j = 0; j < 4; j++){
			int n;
			scanf("%d", &n);
			sum += n;
		}
		if(sum > max){
			max = sum;
			max_index = i+1;
		}
	}
	printf("%d %d\n", max_index, max);
	return 0;
}	