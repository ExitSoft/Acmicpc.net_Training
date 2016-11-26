#include <stdio.h>
#include <string.h>

int main(){
	int n = 0;
	while(1){
		n++;
		int a, b;
		char str[10];

		scanf("%d %s %d", &a, str, &b);
		if(strcmp(str, "E") == 0) break;
		printf("Case %d: ", n);

		if(strcmp(str, ">") == 0){
			printf("%s\n", (a > b)? "true" : "false");
		}
		else if(strcmp(str, ">=") == 0){
			printf("%s\n", (a >= b)? "true" : "false");
		}
		else if(strcmp(str, "<") == 0){
			printf("%s\n", (a < b)? "true" : "false");
		}
		else if(strcmp(str, "<=") == 0){
			printf("%s\n", (a <= b)? "true" : "false");
		}
		else if(strcmp(str, "==") == 0){
			printf("%s\n", (a == b)? "true" : "false");
		}
		else if(strcmp(str, "!=") == 0){
			printf("%s\n", (a != b)? "true" : "false");
		}
	}
	return 0;
}