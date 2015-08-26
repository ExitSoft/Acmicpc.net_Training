#include "stdio.h"

int main(){	
	int n;
	scanf("%d", &n);
	int count = 0;
	for(int i = 0; i < n; i++){
		int tmp;
		scanf("%d", &tmp);
		if(tmp) count++;
	}
	if(count > n/2) printf("Junhee is cute!\n");
	else printf("Junhee is not cute!\n");
	return 0;
}