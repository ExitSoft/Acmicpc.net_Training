#include "stdio.h"
#include "string.h"

int main(){
	char input[10000];
	char input2[10000];

	scanf("%s", input);
	scanf("%s", input2);
	if(strlen(input) >= strlen(input2)){
		printf("go\n");
	}
	else{
		printf("no\n");
	}
	return 0;
}