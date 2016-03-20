#include <stdio.h>
#include <string.h>


char stack[50000000];
char tmp_stack[50000000];

long long top = 0;
long long tmp_top = 0;



bool empty(){
	return top == 0;
}

void push(char n){
	stack[top++] = n;
}

char pop(){
	return stack[--top];
}

bool tmp_empty(){
	return tmp_top == 0;
}
void tmp_push(char n){
	tmp_stack[tmp_top++] = n;
}

char tmp_pop(){
	return tmp_stack[--tmp_top];
}


int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		
		for(int i = 0; i < top; i++){
			stack[i] = NULL;
		}
		for(int i = 0; i < tmp_top; i++){
			tmp_stack[i] = NULL;
		}

		top = 0;
		tmp_top = 0;
		char input[2000000];
		scanf("%s", input);
		int len = strlen(input);
		
		// printf("%d\n", len);
		for(int i = 0; i < len; i++){
			// printf("?\n");
			if(input[i] == '<'){
				if(!empty()) tmp_push(pop());
			}
			else if(input[i] == '>'){
				if(!tmp_empty()) push(tmp_pop());
			}
			else if(input[i] == '-'){
				if(!empty()){
					stack[top-1] = NULL;
					pop();
				}
			}
			else{
				push(input[i]);
			}


			// printf("%s\n", stack);

		}
		len = strlen(tmp_stack);
		for(int i = 0; i < len; i++){
			push(tmp_pop());
		}

		// push('\0');
		len = strlen(stack);
		for(int i = 0; i < len; i++){
			printf("%c", stack[i]);
		}
		printf("\n");
		// printf("%s\n", stack);

	}

	return 0;
}