#include <stdio.h>
#include <math.h>

bool ismin(int r, int w, int h){
	float d = sqrt(w*w + h*h);
	return 2*r >= d;
}

int main(){
	int n = 0;
	while(1){
		n++;
		int r, w, h;
		scanf("%d", &r);
		if(r == 0) break;
		scanf("%d %d", &w, &h);
		printf("Pizza %d ", n);
		printf("%s\n", (ismin(r, w, h)? "fits on the table." : "does not fit on the table."));
	}
	

	return 0;
}