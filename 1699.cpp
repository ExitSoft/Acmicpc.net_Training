#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int cnt = 0;
	scanf("%d", &n);
	// for(int i = 1; i <= 100; i++){
		// n = i;
		cnt = 0;
		// printf("%d\n", n);
		while(true){
			int temp = (int)sqrt((float)n);
			printf("%d\n", temp);
			n -= temp*temp;
			cnt++;
			if(n <= 0) break;
		}
		printf("%d\n", cnt);	
	// }
	
	


	return 0;
}