#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	int result = 1;
	while(n--){
		int tmp;
		scanf("%d", &tmp);
		tmp -= 1;
		result += tmp;
	}
	printf("%d\n", result);
	return 0;
}