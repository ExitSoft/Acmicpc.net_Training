#include "stdio.h"
#include "math.h"
int a,b;
int count = 0;

void func(int n){
	count++;

	if(a == n){
		return;
	}

	return func((n*a)%10);

}

int main(){
	int num;
	scanf("%d",&num);
	while(num--){
		count = 0;
		scanf("%d %d", &a, &b);


		a %= 10;
		if(a == 0){
			printf("10\n");
			continue;
		}
		if(a == 1){
			printf("%d\n",a);
			continue;
		}

		func(a*a);
		b %= count;
		if(b == 0){
			b = count;
		}
		
		int tmp = pow(a,b);
		printf("%d\n", tmp%10);

	}
	return 0;
}