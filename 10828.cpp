#include "stdio.h"
#include "string.h"

int stack[10000];
int top = -1;

bool empty(){
	return top == -1;
}

void push(int n){
	stack[++top] = n;
}

int pop(){
	return stack[top--];
}

int get_size(){
	return top+1;
}

int get_top(){
	return stack[top];
}


int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		char input[1000];
		scanf("%s", input);
		if(strcmp(input, "push") == 0){
			int tmp;
			scanf("%d", &tmp);
			push(tmp);
		}
		else if(strcmp(input, "pop") == 0){
			if(!empty())
				printf("%d\n", pop());
			else
				printf("%d\n", -1);
		}
		else if(strcmp(input, "top") == 0){
			if(!empty())
				printf("%d\n", get_top());
			else
				printf("%d\n", -1);
		}
		else if(strcmp(input, "size") == 0){
			printf("%d\n", get_size());
		}
		else if(strcmp(input, "empty") == 0){
			printf("%d\n", empty());
		}
	}
	return 0;
}