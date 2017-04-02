#include <stdio.h>
#include <string.h>

int main(){
	int s[21] = {0};
	int n;
	char str[20];
	scanf("%d", &n);

	while(n--){
		int input;
		scanf("%s %d", str, &input);
		if(strcmp(str, "add") == 0) s[input] = 1;
		else if(strcmp(str, "check") == 0) printf("%d\n", s[input]);
		else if(strcmp(str, "remove") == 0) s[input] = 0;
		else if(strcmp(str, "toggle") == 0) s[input] = !s[input];
		else if(strcmp(str, "all") == 0){
			for(int i = 0; i < 21; i++) s[i] = 1;
		}
		else if(strcmp(str, "empty") == 0){
			for(int i = 0; i < 21; i++) s[i] = 0;
		}
	}
	return 0;
}