#include "stdio.h"

int main(){
	int num;
	scanf("%d",&num);
	while(num--){
		int h, w, n;
		scanf("%d %d %d",&h, &w, &n);
		bool flag = false;
		if(n%h == 0){
			printf("%d", h);
			flag = true;
		}
		else{
			printf("%d", n%h);
		}

		int result;
		if(flag){
			result = n/h;
		}
		else{
			result = n/h+1;
		}
		if(result > 9){
			printf("%d\n", result);
		}
		else{
			printf("0%d\n",result);
		}
	}
	return 0;
}