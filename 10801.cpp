#include <stdio.h>
#define SIZE 10

int win(int a, int b){
	return (a > b)? -1 : (a < b)? 1 : 0;
}

int main(){
	int a[SIZE];
	int b[SIZE];

	int count_A = 0;
	int count_B = 0;
	for(int i = 0; i < SIZE; i++) scanf("%d", &a[i]);
	for(int i = 0; i < SIZE; i++) scanf("%d", &b[i]);

	for(int i = 0; i < SIZE; i++){
		int result = win(a[i], b[i]);
		(result == -1)? count_A++ : (result == 1)? count_B++ : false;
	}
	printf("%s\n", (count_A > count_B)? "A" : (count_A < count_B)? "B" : "D");
	return 0;
}