#include <stdio.h>
#include <string.h>

int main(){
	int arr[100];
	for(int i = 0; i < 100; i++) arr[i] = -1;
	char input[1000];
	scanf("%s", input);
	int len = strlen(input);
	for(int i = 0; i < len; i++){
		char c = input[i];
		if(arr[c-'a'] == -1) arr[c-'a'] = i;
	}
	for(int i = 0; i < 26; i++) printf("%d ", arr[i]);
	putchar('\n');

	return 0;
}