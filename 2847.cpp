#include <stdio.h>

int main(){

	int n;
	int count = 0;
	int input[101];
	scanf("%d", &n);
	for(int i = n-1; i >= 0; i--) scanf("%d", &input[i]);
	for(int i = 1; i < n; i++){

		while(input[i] >= input[i-1]){
			input[i]--;
			count++;
		}
	}
	printf("%d\n", count);
	
	return 0;
}