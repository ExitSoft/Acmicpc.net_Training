#include <stdio.h>
#include <string.h>
int min (int a, int b){
	return (a < b)? a:b;
}
int main(){
	int cache[2][26] = {0};
	int res = 0;
	for (int c = 0; c < 2; c++){
		char str[1001];
		scanf("%s", str);
		int len = strlen(str);
		for(int i = 0; i < len; i++){
			cache[c][str[i]-'a']++;
		}
	}
	for(int i = 0; i < 26; i++){
		int m = min(cache[0][i], cache[1][i]);
		res += ((cache[0][i] + cache[1][i]) - 2*m);
	}
	printf ("%d\n", res);
}