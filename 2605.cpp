#include "stdio.h"

int stack[1000];
int top = -1;


bool empty(){
	return top == -1;
}

void push(int num, int index){
	for(int i = top; i >= index; i--){
		stack[i+1] = stack[i];
	}
	top++;
	stack[index] = num;
}

int pop(){
	return stack[top--];
}

int main(){

	int num;
	scanf("%d",&num);
	for(int i = 0; i < num; i++){
		int temp;
		scanf("%d",&temp);
		push(i+1, temp);
	}
	while(!empty()){
		printf("%d ", pop());
	}
	printf("\n");

	return 0;
}