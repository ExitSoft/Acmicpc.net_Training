#include <stdio.h>
#include <string.h>

int main(){
	char input[10000];
	scanf("%s", input);
	int len = strlen(input);
	bool flag = true;
	for(int i = 0; i < len/2; i++){
		if(input[i] != input[len-1-i]){
			flag = false;
			break;
		}
	}
	printf("%d\n", (flag)? 1 : 0);

	return 0;
}