#include <stdio.h>

int stack[100];
int top = -1;
int used[100] = {0};
int nCount;

void push(int n){
	stack[++top] = n;
}

int pop(){
	return stack[top--];
}

bool isEmpty(){
	return top == -1;
}

void func(int n, int c){
	used[n] = 1;
	push(n);
	if(c == nCount){
		for(int i = 0; i <= top; i++){
			printf("%d ", stack[i]);
		}
		printf("\n");
		used[n] = 0;
		pop();
		return;
	}

	for(int i = 1; i <= nCount; i++){
		if(used[i] == 0){
			func(i, c+1);
		}
	}
	pop();
	used[n] = 0;

}

int main(){
	
	scanf("%d", &nCount);

	for(int i = 1; i <= nCount; i++){
		func(i, 1);
	}

	return 0;
}