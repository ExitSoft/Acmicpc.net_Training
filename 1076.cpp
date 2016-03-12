#include <stdio.h>
#include <string.h>
#include <math.h>

int func1(char* str){
	if(strcmp(str, "black") == 0){
		return 0;
	}
	else if(strcmp(str, "brown") == 0){
		return 1;
	}
	else if(strcmp(str, "red") == 0){
		return 2;
	}
	else if(strcmp(str, "orange") == 0){
		return 3;
	}
	else if(strcmp(str, "yellow") == 0){
		return 4;
	}
	else if(strcmp(str, "green") == 0){
		return 5;
	}
	else if(strcmp(str, "blue") == 0){
		return 6;
	}
	else if(strcmp(str, "violet") == 0){
		return 7;
	}
	else if(strcmp(str, "grey") == 0){
		return 8;
	}
	else if(strcmp(str, "white") == 0){
		return 9;
	}
	return -1;
}

int main(){
	char str[3][10000];
	scanf("%s", str[0]);
	scanf("%s", str[1]);
	scanf("%s", str[2]);
	long long int output = (func1(str[0])*10 + func1(str[1])) * (long long)pow(10, func1(str[2]));
	printf("%lld\n", output);

	return 0;
}