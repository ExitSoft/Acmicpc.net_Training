#include <stdio.h>

int main(){
	int sum = 0;
	for(int i = 0; i < 5; i++){
		int n;
		scanf("%d", &n);
		if(n < 40) sum += 40;
		else sum += n;
	}
	printf("%d\n", sum / 5);
	return 0;
}