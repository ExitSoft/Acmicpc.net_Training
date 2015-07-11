#include "stdio.h"
#define SWAP(a,b){int t = a; a = b; b = t;};

int main(){
	int num;
	int a[1000], b[1000];
	scanf("%d", &num);

	for(int i = 0; i < num; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < num; i++){
		scanf("%d",&b[i]);
	}

	for(int i = 0; i < num-1; i++){
		for(int j = 0; j < num-1-i; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for(int i = 0; i < num-1; i++){
		for(int j = 0; j < num-1-i; j++){
			if(b[j] < b[j+1]){
				int temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}

	// for(int i = 0; i < num - 1; i++){
	// 	for(int j = 0; j < num - 1 - i; j++){
	// 		if(a[j] > a[j+1]){
	// 			SWAP(a[j], a[j+1]);
	// 		}
	// 	}
	// }

	// for(int i = 0; i < num - 1; i++){
	// 	for(int j = 0; j < num - 1 - i; j++){
	// 		if(b[j] < b[j+1]){
	// 			SWAP(b[j], b[j+1]);
	// 		}
	// 	}
	// }

	// for(int i = 0; i < num; i++){
	// 	printf("%d ", a[i]);
	// }
	// printf("\n");
	// for(int i = 0; i < num; i++){
	// 	printf("%d ", b[i]);
	// }
	// printf("\n");
	int sum = 0;
	for(int i = 0; i < num; i++){
		sum += (a[i] * b[i]);
	}
	printf("%d\n", sum);

	return 0;
}