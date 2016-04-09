#include <stdio.h>

#define N 5
#define MAX 20


char input[N][MAX];

int main(){

	for(int i = 0; i < N; i++){
		scanf("%s", input[i]);
	}

	for(int i = 0; i < MAX; i++){
		for(int j = 0; j < 5; j++){
			putchar(input[j][i]);
		}
		
	}
	putchar('\n');


	return 0;
}