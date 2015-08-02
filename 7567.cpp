#include "stdio.h"


int stack[10000];
int top = -1;
int result = 0;

char input[10000];


int strlen(char *s){
	int count = 0;
	while(s[count] != '\0'){
		count++;
	}
	return count;
}

int main(){

	scanf("%s", input);

	result = 10;
	for(int i = 1; i < strlen(input); i++){
		if(input[i-1] != input[i]){
			result += 10;
		}
		else{
			result += 5;
		}
	}
	printf("%d\n", result);
	return 0;
}