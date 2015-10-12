#include <stdio.h>

long long stack[100000];
long long top = -1;

void push(int n){
	stack[++top] = n;
}

long pop(){
	return stack[top--];
}

void init(){
	for(int i = 0; i <= top; i++){
		stack[i] = 0;
	}
	top = -1;
}

void func(long long num){

	if(num < 2){
		push(num);
		return;
	}

	func(num/2);
	push(num%2);

}

void printStack(){
	for(int i = 0; i <= top; i++){
		printf("%lld", stack[i]);
	}
	printf("\n");
}

int main(){


	long long n;
	init();
	scanf("%lld", &n);

	func(n);
	printStack();


	return 0;
}