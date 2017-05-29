#include <stdio.h>

int main(){
	int arr[301][301] = {0};
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			scanf("%d", &arr[i][j]);
	int c;
	scanf("%d", &c);
	while(c--){
		int x1, y1, x2, y2, result = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for(int i = x1; i <= x2; i++)
			for(int j = y1; j <= y2; j++)
				result += arr[i][j];
		printf("%d\n", result);

	}
	return 0;
}