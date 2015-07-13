#include "stdio.h"
#include "string.h"

int a_count = 1, b_count = 0;

void func2(){
	int temp = b_count;
	b_count += a_count;
	a_count = temp;
}


int main(){

	int num;
	scanf("%d",&num);

	while(num--){
		func2();
	}
	printf("%d %d\n", a_count, b_count);

	return 0;
}