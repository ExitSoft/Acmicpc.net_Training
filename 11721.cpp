#include <stdio.h>

int main(){
	char input[200];
	scanf("%s", input);
	int cnt = 0;
	while(input[cnt] != '\0'){
		if(cnt%10 == 0 && cnt != 0) putchar('\n');
		putchar(input[cnt++]);
	}
	putchar('\n');
	return 0;
}