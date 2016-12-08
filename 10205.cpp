#include <stdio.h>

int strlen(char *str){
	int len = 0;
	while(str[len] != '\0') len++;
	return len;
}

int main(){
	int cnt;
	scanf("%d", &cnt);
	for(int i = 0; i < cnt; i++){
		int n;
		char str[101];

		scanf("%d", &n);
		scanf("%s", str);

		int len = strlen(str);
		for(int j = 0; j < len; j++){
			if(str[j] == 'c') n++;
			else if(str[j] == 'b') n--;
		}

		printf("Data Set %d:\n", i+1);
		printf("%d\n\n", n);

	}
	return 0;
}