#include "stdio.h"

int main(){
	int a,b,v;
	int count = 1;
	scanf("%d %d %d",&a, &b, &v);
	while(v != 0){
		v -= a;
		if(v == 0)
			break;
		v += b;
		count++;
	}

	printf("%d\n", count);



	return 0;
}