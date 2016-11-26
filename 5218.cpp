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
		char str1[21];
		char str2[21];

		scanf("%s", str1);
		scanf("%s", str2);

		int len = strlen(str1);
		printf("Distances: ");
		for(int i = 0; i < len; i++){
			int tmp =  str2[i] - str1[i];
			printf("%d ", (tmp < 0)? 26 + tmp : tmp );
		}
		putchar('\n');

	}
	return 0;
}