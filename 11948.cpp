#include <stdio.h>

int getMin(int a, int b){
	return (a < b)? a : b;
}

int main(){
	int science[4];
	int society[2];

	int min = 100;
	int result = 0;
	for(int i = 0; i < 4; i++){
		scanf("%d", &science[i]);
		if(min > science[i]) min = science[i];
		result += science[i];
	}
	for(int i = 0; i < 2; i++){
		scanf("%d", &society[i]);
		result += society[i];
	}

	result -= (min + getMin(society[0], society[1]));
	printf("%d\n", result);


	return 0;
}