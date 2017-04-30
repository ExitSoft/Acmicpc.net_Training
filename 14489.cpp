#include <stdio.h>

int main(){
	int a, b;
	int chicken;
	scanf("%d %d", &a, &b);
	scanf("%d", &chicken);
	if(a+b >= 2*chicken){
		printf("%d\n", a+b - 2*chicken);
	}
	else{
		printf("%d\n", a+b);
	}
	return 0;
}