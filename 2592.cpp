#include <stdio.h>

int main(){
	int cache[101] = {0};
	int sum = 0;
	for(int i = 0; i < 10; i++){
		int t;
		scanf("%d", &t);
		sum += t;
		cache[t/10]++;
	}
	int max = 0;
	int max_index = 0;
	for(int i = 0; i < 101; i++){
		if(max < cache[i]){
			max = cache[i];
			max_index = i;
		}
	}
	printf("%d %d\n", sum/10, max_index*10);

	return 0;
}