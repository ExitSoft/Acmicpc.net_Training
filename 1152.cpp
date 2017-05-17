#include <stdio.h>
#include <string.h>

int main(){
	char s[1000001];
	scanf("%[^\n]s", s);
	char* tok = strtok(s, " \t");
	int count = 0;
	while(tok != NULL){
		count++;
		tok = strtok(NULL, " \t");
	}
	printf("%d\n", count);
	return 0;
}