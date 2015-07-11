#include <stdio.h>

int main(){
	float arr[1000];
	float max = 0;
	float sum = 0;
	int num;
	scanf("%d",&num);

	for(int i = 0; i < num; i++){
		scanf("%f", &arr[i]);

		if(max < arr[i]){
			max = arr[i];
		}
	}

	for(int i = 0; i < num; i++){
		arr[i] = (arr[i] / max) * 100;
		sum += arr[i];
	}

	float result = sum/num;
	printf("%.2f\n", result);

	return 0;
}