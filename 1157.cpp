#include "stdio.h"
#include "string.h"

char input[1000000];
int alpha[26];
int main(){
	scanf("%s", input);
	int len = strlen(input);
	for(int i = 0; i < len; i++){
		if(input[i] >= 'a')
			alpha[input[i] - 'a']++;
		else
			alpha[input[i] - 'A']++;
	}

	int max = 0;
	int index = 0;
	for(int i = 0; i < 26; i++){
		if(alpha[i] > max){
			max = alpha[i];
			index = i;
		}
	}
	int count = 0;
	for(int i = 0; i < 26; i++){
		if(max == alpha[i]){
			count++;
		}
		if(count == 2){
			printf("?\n");
			return 0;
		};
	}
	printf("%c\n", index+'A');
	return 0;
}