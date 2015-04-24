#include <stdio.h>

int main(void){

	int count, input, sw, temp=0;

	scanf("%d",&count);

	int * arr = new int[count];

	for(int i = 0; i < count; i++){
		scanf("%d", &input);
		arr[i] = input;
	}

	printf("\n");
	for(int i = 0; i < count-1; i++){
	     sw = 0;
	     for(int j = 0; j < count-1; j++){
	          if(arr[j] > arr[j+1]){
	               sw = 1;
	               temp = arr[j];
	               arr[j] = arr[j+1];
	               arr[j+1] = temp;

	               for(int i = 0; i < count; i++){
						printf("%d ", arr[i]);
					}
					printf("\n");
	          }
	     }

	    printf("\n");
		for(int i = 0; i < count; i++){
			printf("%d ", arr[i]);
		}

		printf("\n");

	     if(sw == 0){
	     	printf("%d\n", i);
	          break;
	     }
	}


	for(int i = 0; i < count; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");


	delete arr;

	return 0;
}