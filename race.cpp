#include <stdio.h>

int distance[1000] = {0};
int time[1000] = {0};
int cache[1000] = {0};

int main(){
	int max_d, n;
	scanf("%d %d", &max_d, &n);
	for(int i = 0; i <= n; i++) scanf("%d", &distance[i]);
	for(int i = 1; i <= n; i++) scanf("%d", &time[i]);

	distance[0] = 0;
	for(int i = 1; i <= n+1; i++){
		// printf("index %d \n", i);
		int t_distance = max_d;
		int cnt = i+1;

		while(t_distance >= 0 && cnt >= 1){
			// printf("distance %d\n", distance[cnt-1]);
			t_distance -= distance[--cnt];
		}
		// printf("cnt! = %d ", cnt);
		int min = cache[cnt];

		for(int j = cnt; j < i; j++){
			if(min > cache[j]) min = cache[j];
		}
		// printf("min! = %d\n", min);
		cache[i] = min + time[i];
	}

	for(int i = 0; i <= n+1; i++){
		printf("%3d", cache[i]);
	}
	printf("\n");

	printf("%d\n", cache[n+1]);



	return 0;
}