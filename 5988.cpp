#include <stdio.h>
#include <string.h>

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		char input[10000];
		scanf("%s", input);

		int len = strlen(input);
		if((input[len-1]-'0') % 2 == 0) printf("even\n");
		else printf("odd\n");

	}
	return 0;
}