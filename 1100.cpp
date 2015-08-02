#include <stdio.h>

int main(void){

	char board[8][8];
	char input[8];
	int result = 0;

	for(int i = 0; i < 8; i++){
		scanf("%s", input);
		for(int j = 0; j < 8; j++){
			board[i][j] = input[j];
		}
	}

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			if(board[i][j] == 'F' && (i+j) % 2 == 0){
				result += 1;
			}
		}
	}

	printf("%d\n", result);



	return 0;
}