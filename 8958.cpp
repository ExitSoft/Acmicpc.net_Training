#include <stdio.h>
#include <string.h>

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		int len, result = 0;
		char input[81];
		scanf("%s", input);

		len = strlen(input);

		int score = 0;
		for(int i = 0; i < len; i++){
			if(input[i] == 'O'){
				score++;
				result += score;
			} 
			else score = 0;
		}
		printf("%d\n", result);

	}
	return 0;
}