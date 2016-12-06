#include <stdio.h>

int strlen(char* str){
	int len = 0;
	while(str[len] != '\0') len++;
	return len;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int cnt, len;
		char str[100];
		scanf("%d %s", &cnt, str);
		len = strlen(str);
		for(int i = 0; i < len; i++){
			for(int j = 0; j < cnt; j++) putchar(str[i]);
		}
		putchar('\n');


	}
	return 0;
}