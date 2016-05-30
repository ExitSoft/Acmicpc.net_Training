#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < n-i-1) putchar(' ');
			else{
				putchar('*');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return 0;
}