#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int yonsei = 0, korea = 0;
		for(int i = 0; i < 9; i++){
			int yonsei_input, korea_input;
			scanf("%d %d", &yonsei_input, &korea_input);
			yonsei += yonsei_input;
			korea += korea_input;
		}
		printf("%s\n", (yonsei > korea)? "Yonsei" : (yonsei < korea)? "Korea" : "Draw");
	}
	return 0;
}