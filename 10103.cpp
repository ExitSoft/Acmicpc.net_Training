#include <stdio.h>

int main(){
	int player1 = 100;
	int player2 = 100;
	int n;
	scanf("%d", &n);
	while(n--){
		int input1, input2;
		scanf("%d %d", &input1, &input2);
		if(input1 == input2) continue;
		else if(input1 > input2) player2 -= input1;
		else if(input1 < input2) player1 -= input2;
	}
	printf("%d\n%d\n", player1, player2);
	return 0;
}