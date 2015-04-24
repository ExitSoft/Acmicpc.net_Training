#include <stdio.h>

int abs(int a){
	if (a > 0)
		return a;
	else
		return -a;
}

int p(int a){
	if(a % 4 == 0)
		return 4;
	else
		return a % 4;
}

int n(int a){
	if(p(a) == 4)
		return a/4;
	else
		return (a/4)+1;
}

int main(void){
	int a[2];
	scanf("%d %d", &a[0], &a[1]);
	printf("%d\n", abs(p(a[0])-p(a[1])) + abs(n(a[0]) - n(a[1])));
	return 0;
}
