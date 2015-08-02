#include "stdio.h"
#include "string.h"

int count[26] = {0};
char input[1000];

int main(){

	scanf("%s", input);
	for(int i = 0; i < strlen(input); i++){
		count[input[i]-'a']++;
	}
	for(int i = 0; i < 26; i++){
		printf("%d ", count[i]);
	}
	printf("\n");
	return 0;
}