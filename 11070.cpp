#include <stdio.h>




int main(){
	int nCount;
	scanf("%d", &nCount);
	while(nCount--){
		int win[1011] = {0};
		int lose[1011] = {0};
		double result[1011] = {0};

		int team_num, n;
		int a, b, aScore, bScore;

		scanf("%d %d", &team_num, &n);
		for(int i = 0; i < n; i++){

			scanf("%d %d %d %d", &a, &b, &aScore, &bScore);
			win[a] += aScore;
			win[b] += bScore;
			lose[a] += bScore;
			lose[b] += aScore;
		}

		for(int i = 1; i <= team_num; i++){
			if(win[i] == 0 && lose[i] == 0){
				result[i] = 0;
				continue;
			}
			double S = win[i] * win[i];
			double A = lose[i] * lose[i];
			result[i] = (S / (S + A));
		}

		double max = result[1], min = result[1];


		for(int i = 1; i <= team_num; i++){
			if(max < result[i]) max = result[i];
			if(min > result[i]) min = result[i];
		}

		printf("%d\n%d\n", (int)(max*1000), (int)(min*1000));



	}
	return 0;
}