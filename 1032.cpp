#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char input[50][100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", input[i]);
	}
	int len = strlen(input[0]);
	for(int i = 0; i < len; i++){
		bool flag = true;
		for(int j = 0; j < n-1; j++){
			if(input[j][i] != input[j+1][i]){
				flag = false;
				break;
			}
		}
		if(!flag) putchar('?');
		else putchar(input[0][i]);
	}
	putchar('\n');
	return 0;
}