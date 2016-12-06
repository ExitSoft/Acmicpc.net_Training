#include <stdio.h>

int stack[100001];
int top = 0;

bool isEmpty(){
	return top == 0;
}

void push(int n){
	stack[top++] = n;
}

int pop(){
	return stack[--top];
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int input;
		scanf("%d", &input);

		if(input == 0) pop();
		else push(input);

	}
	int result = 0;
	while(!isEmpty()){
		result += pop();
	}
	printf("%d\n", result);
	return 0;
}	