#include <stdio.h>
int max(int a, int b, int c){
	if (a > b && a > c){
		return a;
	}
	else if (b > a && b > c){
		return b;
	}
	else if (c > a && c > b){
		return c;
	}
	else{
		return a;
	}
}
int main(){
	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);

	if (a == b && a == c && b == c){
		printf("%d\n", a*1000+10000);
	}
	else if(a != b && a != c && b != c){
		printf("%d\n", max(a, b, c)*100);
	}
	else{
		if((a == b && a != c) || (a == c && a != b)){
			printf("%d\n", 1000 + 100*a);
		}
		else if ((b == a && b != c) || (b == c && b != a)){
			printf("%d\n", 1000 + 100*b);
		}
		else{
			printf("%d\n", 1000 + 100*c);
		}

	}

	return 0;
}
