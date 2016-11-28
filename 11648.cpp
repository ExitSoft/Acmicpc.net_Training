#include <stdio.h>

int stack[1001];
int top = 0;

void push(int n){
	stack[top++] = n;
}

bool isEmpty(){
	return top == 0;
}

int pop(){
	return stack[--top];
}

int strlen(char *str){
	int len = 0;
	while(str[len] != '\0') len++;
	return len;

}

int main(){
	char input[10];
	scanf("%s", input);
	int count = 0;
	int result = 1;
	while(1){
		int len = strlen(input);
		if(len <= 1) break;

		result = 1;
		for(int i = 0; i < len; i++){
			result *= (input[i] - '0');
		}
		int tmp = result;
		while(tmp != 0){
			push(tmp%10);
			tmp = tmp/10;
		}
		int i = 0;
		while(!isEmpty()){
			input[i++] = (pop() + '0');
		}
		input[i] = '\0';
		count++;
	}
	printf("%d\n", count);

	return 0;
}