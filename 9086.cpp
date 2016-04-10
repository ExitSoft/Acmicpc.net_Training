#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		char input[10000];
		scanf("%s", input);
		putchar(input[0]);
		int len = 0;
		while(input[len] != '\0') len++;
		putchar(input[len-1]);
		putchar('\n');
	}
	return 0;
}