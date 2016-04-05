#include <stdio.h>
#include <string.h>

char n[100];
int  m;

int get(){
	int result = n[0]-'0';
	int len = strlen(n);
	for(int i = 1; i < len; i++){
		result *= 10;
		result += n[i]-'0';
	}
	return result;
}

int main(){
	
	scanf("%s %d", n, &m);
	int len = strlen(n);
	int num = get();
	int count = 0;
	for(int i = 0; i < num; i++){
		for(int j = 0; j < len; j++){
			putchar(n[j]);
			count++;
			if(count == m){
				putchar('\n');
				return 0;
			}
		}
	}
	putchar('\n');





	return 0;
}