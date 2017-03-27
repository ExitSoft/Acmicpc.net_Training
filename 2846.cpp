#include <stdio.h>

int main(){
	int n;
	int input[1001];
	int max = 0;
	int bottom, top;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &input[i]);
		if(i > 0){
			if(input[i] <= input[i-1]){
				top = input[i-1];
				if(max < top - bottom){
					max = top - bottom;
				}
				bottom = input[i];
			}
			else if (input[i] > input[i-1] && i == n-1){
				top = input[i];
				if(max < top - bottom) max = top - bottom;
			}
		}
		else bottom = input[i];
	}
	printf("%d\n", max);
	return 0;
}