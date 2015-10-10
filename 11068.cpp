#include <stdio.h>
#define SIZE 10000

int stack[SIZE];
int top = -1;

void init(){
	for(int i = 0; i <= top; i++){
		stack[i] = 0;
	}
	top = -1;
}

void push(int n){
	stack[++top] = n;
}

int pop(){
	return stack[top--];
}


void func(int num, int div){
	if(num < div){
		push(num);
		return;
	}
	func(num/div, div);
	push(num%div);
}


bool is(){
	int tmp = top;
	for(int i = 0; i <= top/2; i++){
		if(stack[i] != stack[tmp]) return false;
		tmp--;
	}
	return true;
}

int main(){
	int nCount;
	scanf("%d", &nCount);
	while(nCount--){
		int inputNum;
		scanf("%d", &inputNum);
		bool tmp;
		for(int i = 2; i <= 64; i++){
			init();
			func(inputNum, i);
			tmp = is();
			if(tmp) break;
		}
		if(tmp){
			printf("1\n");
		}
		else{
			printf("0\n");
		}

	}
	return 0;
}