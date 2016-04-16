#include <stdio.h>

int main(){
	int len;
	scanf("%d", &len);
	char input[5000005];
	scanf("%s", input);
	long long sum = 0;
	int tmp = 0;
	for(int i = 0; i <= len; i++){
		
		char c = input[i];
		if(c >= '0' && c <= '9'){
			tmp *= 10;
			tmp += c-'0';
		}
		else{
			sum += tmp;
			tmp = 0;
		}
	}
	printf("%lld\n", sum);

	return 0;
}