#include <stdio.h>

int main(){

	int num;
	int arr[200];
	scanf("%d", &num);
	for(int i = 0; i < num; i++){
		scanf("%d", &arr[i]);
	}
	int count = 0;
	int sum = 0;
	for(int i = 0; i < num; i++){
		if(arr[i] == 1){
			count++;
			sum += count;
		}
		else{
			count = 0;
		}
	}
	printf("%d\n", sum);

	return 0;
}