#include "stdio.h"

int abs(int n){
	if(n < 0){
		return n * -1;
	}
	return n;
}

int main(){

	int nCount;
	scanf("%d", &nCount);
	while(nCount--){
		char input[10];
		scanf("%s", input);
		int front = 0;
		int back = 0;
		int mult = 1;
		for(int i = 2; i >= 0; i--){
			int tmp = input[i] - 'A';
			front += tmp * mult;
			mult *= 26;
		}
		mult = 1;
		for(int i = 7; i >= 4; i--){
			int tmp = input[i] - '0';
			back += tmp * mult;
			mult *= 10;
		}

		if(abs(front-back) <= 100){
			printf("nice\n");
		}
		else{
			printf("not nice\n");
		}

	}
	
	return 0;
}