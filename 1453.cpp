#include "stdio.h"
int stack[1000];
int top = -1;

bool empty(){
	return top == -1;
}
void push(int n){
	stack[++top] = n;
}

int pop(){
	if(!empty()){
		return stack[top--];
	}
}

int main(){
	int num;
	scanf("%d", &num);
	int count = 0;
	for(int i = 0; i < num; i++){
		int temp;
		bool flag = true;
		scanf("%d", &temp);
		for(int j = 0; j < top+1; j++){
			if(temp == stack[j]){
				count++;
				flag = false;
			}
		}
		if(flag)
			push(temp);
	}
	printf("%d\n", count);
	return 0;
}