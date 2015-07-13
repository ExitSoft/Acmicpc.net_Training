#include "stdio.h"

int main(){
	int arr[3];
	int sum = 0;
	for(int i = 0; i < 3; i++){
		scanf("%d",&arr[i]);
		sum += arr[i];
	}

	if(sum != 180){
		printf("Error\n");
		return 0;
	}

	if(arr[0] == arr[1] && arr[1] == arr[2]){
		printf("Equilateral\n");
	}
	else if(arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]){
		printf("Isosceles\n");
	}
	else{
		printf("Scalene\n");
	}




	return 0;
}