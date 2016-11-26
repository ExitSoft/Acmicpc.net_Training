#include <stdio.h>

#define PRICE_A 350.34
#define PRICE_B 230.90
#define PRICE_C 190.55
#define PRICE_D 125.30
#define PRICE_E 180.90

int main(){
	int n;
	float price[] = {PRICE_A, PRICE_B, PRICE_C, PRICE_D, PRICE_E};
	scanf("%d", &n);

	while(n--){
		int input;
		float sum = 0;
		for(int i = 0; i < 5; i++){
			scanf("%d", &input);
			sum += input * price[i];
		}
		printf("$%.2f\n", sum);

	}
	return 0;
}