#include "stdio.h"
#include "string.h"

int main(){
	int num;
	scanf("%d",&num);
	while(num--){
		int index;
		char str[10000];
		scanf("%d %s",&index, str);
		index--;
		for(int i = index; i < strlen(str)-1; i++){
			str[i] = str[i+1];
		}
		for(int i = 0; i < strlen(str)-1; i++){
			printf("%c", str[i]);
		}
		printf("\n");

	}
	return 0;
}