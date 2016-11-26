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

	int cnt = 0;
	for(int i = 0; i < len; i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}