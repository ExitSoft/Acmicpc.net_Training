#include <stdio.h>

int score[10000][7] = {0};
int max_v = 0;

int max(int a, int b){
	return (a > b)? a : b;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){

		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		score[i][a]++;
		score[i][b]++;
		score[i][c]++;
		score[i][d]++;

		for(int j = 1; j <= 6; j++){
			if(score[i][j] == 4){
				score[i][0] = 50000 + j * 5000;
			}
			else if(score[i][j] == 3){
				score[i][0] = 10000 + j * 1000;
				break;
			}
			else if(score[i][j] == 2){
				score[i][0] = 1000 + j * 100;
				break;	
			} 
			else if(score[i][j] == 1) score[i][0] = j * 100;
		}
		max_v = max(max_v, score[i][0]);

	}
	printf("%d\n", max_v);
	

	return 0;
}