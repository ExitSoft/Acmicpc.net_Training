#include "stdio.h"
#define SWAP(a,b){int t = a; a = b; b = t;};

int main(){
	int num;
	scanf("%d", &num);
	while(num--){
		int arr[10];
		for(int i = 0; i < 10; i++){
			scanf("%d", &arr[i]);
		}

		for(int i = 0; i < 9; i++){
			for(int j = 0; j < 9 - i; j++){
				if(arr[j] < arr[j+1])
					SWAP(arr[j], arr[j+1]);
			}
		}
		printf("%d\n", arr[2]);
	}
	return 0;
}