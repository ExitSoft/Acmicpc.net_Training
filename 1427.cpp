#include "stdio.h"
#include "string.h"
#define SWAP(a,b) {int t = a; a = b; b = t;};

int main(){
	char input[1000];
	scanf("%s", input);
	int arr[1000];
	for(int i = 0; i < strlen(input); i++){
		arr[i] = input[i] - 48;
		// printf("%d\n", arr[i]);
	}
	int num = strlen(input);
	for(int i = 0; i < num-1; i++){
		for(int j = 0; j < num-1; j++){
			if(arr[j] < arr[j+1])
				SWAP(arr[j], arr[j+1]);
		}
	}

	for(int i = 0; i < num; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}