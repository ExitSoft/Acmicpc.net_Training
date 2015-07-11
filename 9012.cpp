#include <stdio.h>
#include <string.h>

char stack[1000];
int top = -1;

char pop(){
	return stack[top--];
}

void push(char n){
	stack[++top] = n;
}

bool empty(){
	return top == -1;
}

int main(){
	int num;
	scanf("%d", &num);

	while(num--){
		top = -1;
		char input[1000];
		scanf("%s", input);
		bool flag = true;

		for(int i = 0; i < strlen(input); i++){
			if(input[i] == '('){
				push(input[i]);
			}
			else if(input[i] == ')'){
				if(!empty()){
					pop();
				}
				else{
					flag = false;
					break;
				}
			}
		}

		if(flag && empty()){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}


	}
	return 0;
}