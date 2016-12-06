#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		int input[5];
		int result;
		for(int i = 0; i < 5; i++) scanf("%d", &input[i]);

		sort(input, input+5);
		result = input[1] + input[2] + input[3];
		if(input[3] - input[1] >= 4) printf("KIN\n");
		else printf("%d\n", result);
	}

	return 0;
}