#include <stdio.h>

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		int n;
		int winA = 0, winB = 0;
		

		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			char a[2], b[2];
			scanf("%s %s", a, b);

			printf("%s %s\n", a, b);

			
		}
		

	}

	return 0;
}