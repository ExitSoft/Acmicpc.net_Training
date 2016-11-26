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

			if(a[0] == b[0]) continue;
			if(a[0] == 'R'){
				if(b[0] == 'S'){
					winA++;
					continue;
				}
				else if(b[0] == 'P'){
					winB++;
					continue;
				}
			}
			else if(a[0] == 'S'){
				if(b[0] == 'R'){
					winB++;
					continue;
				}
				
				else if(b[0] == 'P'){
					winA++;
					continue;
				}	
			}
			else if(a[0] == 'P'){
				if(b[0] == 'R'){
					winA++;
					continue;
				}
				else if(b[0] == 'S'){
					winB++;
					continue;	
				} 
			}	


		}
		
		if(winA > winB) printf("Player 1\n");
		else if(winA < winB) printf("Player 2\n");
		else printf("TIE\n");
	}


	return 0;
}