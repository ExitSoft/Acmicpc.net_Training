#include <stdio.h>
#include <string.h>

int main(){
	char input[100001];
	scanf("%s", input);

	int len = strlen(input);
	int joi = 0;
	int ioi = 0;

	for(int i = 0; i < len; i++){
		if(input[i] == 'J'){
			if(input[i+1] == 'O' && input[i+2] == 'I') joi++;
		}
		else if(input[i] == 'I'){
			if(input[i+1] == 'O' && input[i+2] == 'I') ioi++;	
		}
	}

	printf("%d\n%d\n", joi, ioi);

	return 0;
}