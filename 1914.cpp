#include <stdio.h>

int count = 0;

void hanoi(int n, int a, int b){
	if(n == 1){
		printf("%d %d\n", a, b);
	}
	else{
		int c = 6 - a - b;
		hanoi(n-1,a,c);
		printf("%d %d\n", a, b);
		hanoi(n-1, c, b);
	}
}
int pow(int n){
	if(n == count){
		return 1;
	}
	else{
		return 2 * pow(n-1);
	}
}
int main(){
	int num;
	scanf("%d",&num);
	count = pow(num)-1;
	printf("%d\n", count);
	if(count <= 20){
		hanoi(num,1,3);
	}
	return 0;
}