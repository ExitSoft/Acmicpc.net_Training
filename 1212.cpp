#include <stdio.h>
// #include <string.h>

void func(int n){
	if(n <= 1){
		printf("%d", n % 2);
		return;	
	} 

	func(n / 2);
	printf("%d", n % 2);
}

void func2(int n, int i){
	if(i == 0){
		switch(n){
			case 0:
			printf("0");
			return;
			case 1:
			printf("1");
			return;
			case 2:
			printf("10");
			return;
			case 3:
			printf("11");
			return;
			case 4:
			printf("100");
			return;
			case 5:
			printf("101");
			return;
			case 6:
			printf("110");
			return;
			case 7:
			printf("111");
			return;
		}
	}
	else{
		switch(n){
			case 0:
			printf("000");
			return;
			case 1:
			printf("001");
			return;
			case 2:
			printf("010");
			return;
			case 3:
			printf("011");
			return;
			case 4:
			printf("100");
			return;
			case 5:
			printf("101");
			return;
			case 6:
			printf("110");
			return;
			case 7:
			printf("111");
			return;
		}	
	}
	
}

int strlen(char *s){
	int len = 0;
	while(s[len] != '\0'){
		len++;
	}
	return len;
}

int main(){
	char input[333340];
	scanf("%s", input);

	// for(int i = 0; i < strlen(input); i++){
	int i = 0;
	while(input[i] != '\0'){
		func2(input[i] - '0', i);
		i++;
	}
	// printf("%d\n", strlen(input));
	printf("\n");
	return 0;
}