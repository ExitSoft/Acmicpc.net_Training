#include "stdio.h"

int arr[3] = {0};

int main(){
	int n;
	int max = 0;
	scanf("%d", &n);
	while(n--){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		arr[0] += a;
		arr[1] += b;
		arr[2] += c;
	}
	int index;
	for(int i = 0; i < 3; i++){
		if(max < arr[i]){
			index = i+1;
			max = arr[i];
		}
	}
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("max =  %d\n", max);
	for(int i = 0; i < 3; i++){
		if(max == arr[i] && i != index-1){
			index = 0;
			printf("?\n");	
		} 
	}
	printf("%d %d\n", index, max);

	return 0;
}