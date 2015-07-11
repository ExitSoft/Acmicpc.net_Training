#include "stdio.h"
// #include "math.h"

int func(int a, int b){
	if(b == 1){
		return a;
	}
	else{
		return a * func(a,b-1);
	}

}

int main(){
	int num;
	scanf("%d",&num);
	while(num--){
		int a,b;
		scanf("%d %d", &a, &b);
		// printf("%d\n", func(a,b)%10);
		printf("%d\n", func(a,b));
	}
	return 0;
}