#include <stdio.h>

int strlen(char *str){
	int len = 0;
	while(str[len] != '\0') len++;
	return len;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){

		char str[21];
		scanf("%s", str);

		int len = strlen(str);
		for(int i = 0; i < len; i++)
			if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
		printf("%s\n", str);

	}

	return 0;
}