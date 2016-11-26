#include <stdio.h>

int strlen(char *str){
	int len = 0;
	while(str[len] != '\0') len++;
	return len;
}

int main(){
	char str[101];
	scanf("%s", str);

	int len = strlen(str);
	int count = 1;
	for(int i = 0; i < len; i++){
		if(str[i] == ',') count++;
	}
	printf("%d\n", count);


	return 0;
}