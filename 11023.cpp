#include <stdio.h>

int main(){
	int a;
	int result = 0;

	while((a = scanf("%d", &a)) != EOF ){
		result += a;
	}
	printf("%d\n", result);
	return 0;
}