#include <stdio.h>
#define SWAP(a,b) {int t = a; a = b; b = t;}

int main(){
	int n;
	int input[1001];

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &input[i]);
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i-1; j++){
			if(input[j] > input[j+1]) SWAP(input[j], input[j+1]);
		}
	}

	for(int i = 0; i < n; i++) printf("%d\n", input[i]);
	return 0;
}