#include <stdio.h>

void func(int n){
	for(int i = 0; i < n; i++){
		if(i % 2 == 0) putchar('*');
		else putchar(' ');
	}
	putchar('\n');
	for(int i = 0; i < n; i++){
		if(i % 2 == 1) putchar('*');
		else putchar(' ');
	}
	putchar('\n');

}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		func(n);
		// putchar('\n');
	} 

	return 0;
}