#include <stdio.h>

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		int n;
		int score[1001];
		int sum = 0, overCount = 0;
		float avg;
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d", &score[i]);
			sum += score[i];
		} 
		avg = float(sum) / float(n);
		for(int i = 0; i < n; i++){
			if(score[i] > avg) overCount++;
		}
		printf("%.3f%%\n", float(overCount)/float(n)*100);


	}
	return 0;
}