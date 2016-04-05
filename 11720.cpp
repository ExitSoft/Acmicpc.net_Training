#include <stdio.h>


int main(){
	int result = 0;
	int cnt;
	scanf("%d", &cnt);
	char str[200];
	scanf("%s", str);
	for(int i = 0; i < cnt; i++){
		result += str[i] - '0';
	}
	printf("%d\n", result);
	return 0;
}