#include <stdio.h>

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		int n;
		scanf("%d", &n);

		int divide = 0;
		float sum = 0;
		for(int i = 0; i < n; i++){
			int degree;
			float score;

			scanf("%d %f", &degree, &score);
			divide += degree;
			sum += (degree * score);
		}
		
		printf("%d %.1f\n", divide, sum/divide);
	}
	return 0;
}