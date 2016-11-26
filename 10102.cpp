#include <stdio.h>

int main(){
	int n;
	int a = 0, b = 0;
	char str[20];

	scanf("%d", &n);
	scanf("%s", str);

	for(int i = 0; i < n; i++) (str[i] == 'A')? a++ : b++;
	printf("%s\n", (a > b)? "A" : (a < b)? "B" : "Tie");
	return 0;
}