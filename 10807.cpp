#include "stdio.h"

int num;
int count[500];
int found_num;

int main(){
	scanf("%d", &num);
	for(int i = 0; i < num; i++){
		int tmp;
		scanf("%d", &tmp);
		count[tmp+100]++;
	}

	scanf("%d", &found_num);
	printf("%d\n", count[found_num+100]);


	return 0;
}