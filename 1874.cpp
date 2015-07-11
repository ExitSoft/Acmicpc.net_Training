#include "stdio.h"

int stack[1000];
int top = -1;



bool empty(){
	return top == -1;
}

void push(int n){
	printf("+\n");
	stack[++top] = n;
}

int pop(){
	if(!empty()){
		printf("-\n");
		return stack[top--];
	}
}




int main(){
	int num;
	int arr[1000];
	bool flag = false;
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
	if(flag){
		printf("NO\n");
	}
	return 0;
}