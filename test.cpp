#include "stdio.h"

int main(){
	char input[10000];
	int count = 0;
	while(scanf("%s", input) != '\0'){
		count++;
	}
	printf("%d\n", count);
	return 0;
}