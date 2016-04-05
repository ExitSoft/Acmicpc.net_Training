#include <stdio.h>

long long stack[10000];
int top = -1;

void push(int n){
	stack[++top] = n;
	return;
}

int pop(){
	return stack[top--];
}

bool empty(){
	return top == -1;
}

char str[2000000000];
int cur = -1;

void func2(){
	while(!empty()){
		str[++cur] = pop() + '0';
	}
}

void func(int n){
	// if(n <= 0) return func2();
	while(n > 0){
		// printf("\t%d\n", n);
		push(n % 10);
		n = n / 10;	
	}
	return func2();
	
	// return func(n / 10);
}

void print_str(){
	for(int i = 0; i <= cur; i++){
		putchar(str[i]);
	}
	putchar('\n');
}

int main(){

	long long n, m;
	scanf("%lld %lld", &n, &m);
	for(int i = 1; i <= n; i++) func(i);
		
	// print_str();

	if(m-1 > cur) printf("-1\n");
	else printf("%c\n", str[m-1]);
	



	return 0;
}