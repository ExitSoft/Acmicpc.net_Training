#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int score[10];
	int d[10];
	int rank[5];
	int cnt = 0;
	for(int i = 0; i < 8; i++){
		scanf("%d", &score[i]);
		d[i] = score[i];
	}
	sort(d, d+8);
	int sum = 0;
	for(int i = 3; i <= 7; i++){
		sum += d[i];
		for(int j = 0; j < 8; j++){
			if(score[j] == d[i]){
				rank[cnt++] = j;
				break;
			}
		}
	}
	printf("%d\n", sum);
	sort(rank, rank+5);
	for(int i = 0; i < 5; i++) printf("%d ", rank[i]+1);
	putchar('\n');
	


	return 0;
}