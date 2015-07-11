#include "stdio.h"

int stack[1000];
int top = -1;

int pop_stack[1000];
int top2 = -1;

char char_stack[1000];
int top3 = -1;

void char_push(char n){
	char_stack[++top3] = n;
}


void push2(int n){
	pop_stack[++top2] = n;
}

int pop2(){
	return pop_stack[top2--];
}

bool empty(){
	return top == -1;
}

void push(int n){
	// printf("+\n");
	char_push('+');
	stack[++top] = n;
}

int pop(){
	if(!empty()){
		// printf("-\n");
		char_push('-');
		push2(stack[top]);
		return stack[top--];
	}
}




int main(){
	int num;
	int arr[1000];
	scanf("%d", &num);

	for(int i = 0; i < num; i++){
		scanf("%d", &arr[i]);
	}

	int count = 1;
	for(int i = 0 ; i < num; i++){

		while(stack[top] < arr[i] || empty()){
			push(count++);
			// printf("count = %d\n", count);
		}

		while(stack[top] >= arr[i]){
			// printf("%d\n", pop());
			// printf("count = %d\n", count);
			// push2(pop());
			pop();
		}


		// if(count == arr[i]){
		// 	printf("i = ? %d\n", arr[i]);
		// 	pop();
		// 	// break;
		// }

		// if(stack[top] == arr[i]){
		// 	printf("%d\n", pop());
		// }
		// if(empty()){
		// 	flag = true;
		// 	break;
		// }

	}
	bool flag = true;

	// if(top2+1 != num){
	// 	printf("NO\n");
	// }
	// printf("\n\n");
	for(int i = 0; i < num; i++){
		if(arr[i] != pop_stack[i]){
			// printf("NO\n");
			flag = false;
			break;
		}
		// printf("%d\n", pop_stack[i]);
	}

	if(flag){
		for(int i = 0; i < top3+1; i++){
			printf("%c\n", char_stack[i]);
		}
	}
	else{
		printf("NO\n");
	}
	return 0;
}