#include "stdio.h"

int main(){
	int num;
	scanf("%d",&num);
	while(num--){
		int s;
		scanf("%d",&s);

		int count;
		int temp = 0;
		scanf("%d",&count);
		for(int i = 0; i < count; i++){
			int buy_count;
			int price;
			scanf("%d %d", &buy_count, &price);
			temp += buy_count * price;
		}
		printf("%d\n", s+temp);
	}
	return 0;
}