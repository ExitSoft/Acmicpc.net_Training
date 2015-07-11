#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void func(char input[], int n, int result){
	if(n < 0){
		printf("%d\n", result);
		return;
	}
	int temp = 0;

	if(input[n] == 'A'){
		temp += 10;
	}
	else if(input[n] == 'B'){
		temp += 11;
	}
	else if(input[n] == 'C'){
		temp += 12;
	}
	else if(input[n] == 'D'){
		temp += 13;
	}
	else if(input[n] == 'E'){
		temp += 14;
	}
	else if(input[n] == 'F'){
		temp += 15;
	}
	else{
		temp += input[n] - 48;
	}
	temp *= pow(16, strlen(input)-1 - n);

	func(input, n-1, result+temp);
}

int main(){
	char input[100];
	scanf("%s",input);
	func(input, strlen(input)-1, 0);
	return 0;
}