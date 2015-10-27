#include <stdio.h>
#include <algorithm>

using namespace::std;

int dp[1000][3];

int main(){

	int nCount;
	scanf("%d", &nCount);

	for(int i = 1; i <= nCount; i++){
		scanf("%d", &dp[i][0]);
	}

	dp[1][1] = dp[1][2] = dp[1][0];

	for(int i = 2; i <= nCount; i++){
		dp[i][1] = dp[i-1][2] + dp[i][0];
		dp[i][2] = max(dp[i-2][1], dp[i-2][2]) + dp[i][0];
	}

	printf("%d\n", max(dp[nCount][1], dp[nCount][2]));






	return 0;
}