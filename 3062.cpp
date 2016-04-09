#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(int n){
	int output = 0;
	while(n > 0){
		output = output*10 + n % 10;
		n /= 10;
	}
	return output;
}
void func(int n){
	bool flag = true;
	int len = 0;
	char input[1000];
	while(n > 0){
		input[len++] = (n%10)+'0';
		n /= 10;
	}
	for(int i = 0; i < len/2; i++){
		if(input[i] != input[len-1-i]){
			flag = false;
			break;
		}
	}
	(flag)? printf("YES\n") : printf("NO\n");

}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int input;
		scanf("%d", &input);
		func(input+reverse(input));

	}
	return 0;
}