#include "stdio.h"
#include "string.h"
char stack[1000];
int top = -1;

void push(char c){
	stack[++top] = c;
}
int main(){
	int num;
	scanf("%d",&num);
	while(num--){
		top = -1;
		char input[1000];
		scanf("%s", input);
		int result = 2015;
		for(int i = 0; i < strlen(input); i++){
			bool flag = true;
			for(int j = 0; j <= top; j++){
				if(stack[j] == input[i])
					flag = false;
			}
			if(flag)
				push(input[i]);
		}

		for(int i = 0; i <= top; i++){
			result -= stack[i];
		}
		printf("%d\n", result);
	}
	return 0;
}