#include "stdio.h"

int stack[1000000];
int top = -1;

void push(int n){
	stack[++top] = n;
}


bool isprime(int n){
	if(n == 1) return false;
	for(int i = 0; i <= top; i++){
		if(n % stack[i] == 0) return false;
	}
	return true;
}

int main(){
	int start, end;
	scanf("%d %d", &start, &end);
	for(int i = 1; i <= end; i++){
		if(isprime(i)){
			push(i);
			if(i >= start) printf("%d\n", i);
		}
	}
	return 0;
}