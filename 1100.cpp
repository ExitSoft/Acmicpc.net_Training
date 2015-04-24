#include <stdio.h>

int main(void){

	char board[8][8];
	char input[8];
	int result = 0;

	for(int i = 0; i < 8; i++){
			// i = 1;
		// scanf("%c%c%c%c%c%c%c%c",&board[i][0], &board[i][1], &board[i][2], &board[i][3], &board[i][4], &board[i][5], &board[i][6], &board[i][7]);
		scanf("%d", &input);
		printf("%d\n", input);
		// board[i][j] = input;

		// if( ((i+j) % 2 == 0) && input == 'F'){
		// 	// printf("%d",(i+j));
		// 	// printf("i %d j %d",i,j);
		// 	// printf("hel\n");
		// 	result += 1;
		// }
		// if((i+j) % 2 == 1){
		// 	printf("흑 ");
		// }
		// else{
		// 	printf("백 ");
		// }
		// printf("%d\n",i+j);
		// printf("  %d\n", result);
		// printf("\n");
	}

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			if(board[i][j] == 'F' && (i+j) % 2 == 0){
				result += 1;
			}

		}
		printf("%d\n",result);
	}

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			printf("%c",board[i][j]);
		}
		// printf("\n");
	}
	printf("%d\n", result);



	return 0;
}