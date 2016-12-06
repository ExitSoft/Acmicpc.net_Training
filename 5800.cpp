#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int cnt;
	scanf("%d", &cnt);
	for(int c = 0; c < cnt; c++){
		int n;
		int input[101];

		scanf("%d", &n);
		for(int i = 0; i < n; i++) scanf("%d", &input[i]);

		int gap = 0;
		sort(input, input+n);

		for(int i = 0; i < n-1; i++){
			if(gap < input[i+1] - input[i]){
				gap = input[i+1] - input[i];
			}
		}

		printf("Class %d\n", c+1);
		printf("Max %d, Min %d, Largest gap %d\n", input[n-1], input[0], gap);
	}

	return 0;
}