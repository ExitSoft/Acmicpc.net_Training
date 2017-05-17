#include <stdio.h>
#include <string.h>

int main(){
	char input[10000];
	scanf("%s", input);
	int len = strlen(input);
	bool flag = false;
	for(int i = 0; i < len/2; i++){
		flag = (input[i] != input[len-1-i]);
		if(flag) break;
	}
	printf("%d\n", (flag)? 0 : 1);

	return 0;
}