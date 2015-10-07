#include <stdio.h>
#define SWAP(a,b) {int t = a; a = b; b = t;};


int main(){
	int arr[3];
	for(int i = 0; i < 3; i++){
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2 - i; j++){
			if(arr[j] > arr[j+1]){
				SWAP(arr[j], arr[j+1]);	
			} 
		}
	}

	printf("%d\n", arr[1]);

	return 0;
}