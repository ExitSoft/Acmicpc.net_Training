#include "stdio.h"
#define SWAP(a,b) {int t = a; a = b; b = t;};

int main(){
	int num;
	int arr[1000000];
	scanf("%d",&num);

	for(int i = 0; i < num; i++){
		scanf("%d",&arr[i]);
	}

	for(int i = 0; i < num - 1; i++){
		for(int j = 0; j < num -1; j++){
			if(arr[j] > arr[j+1]){
				SWAP(arr[j],arr[j+1]);
			}
		}
	}

	for(int i = 0; i < num; i++){
		printf("%d\n", arr[i]);
	}

	return 0;
}