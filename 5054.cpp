#include <stdio.h>

int main(){
	int c;
	scanf("%d", &c);
	while(c--){
		int n;
		int min = 999, max = 0;
		scanf("%d", &n);
		while(n--){
			int input;
			scanf("%d", &input);
			if(input >= max) max = input;
			if(input <= min) min = input;
		}
		printf("%d\n", (max - min)*2);
	}
	return 0;
}	