#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int countA = 0, countB = 0;
	while(n--){
		int a,b;
		scanf("%d %d", &a, &b);
		(a > b)? countA++ : (a < b)? countB++ : false ;
	}
	printf("%d %d\n", countA, countB);
	return 0;
}