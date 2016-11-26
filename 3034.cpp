#include <stdio.h>
#include <math.h>

int main(){
	int n, w, h;
	scanf("%d %d %d", &n, &w, &h);
	while(n--){
		int input;
		scanf("%d", &input);
		if(input > sqrt(w*w + h*h)) printf("NE\n");
		else printf("DA\n");
	}
	return 0;
}