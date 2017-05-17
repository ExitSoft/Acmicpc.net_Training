#include <stdio.h>

int main(){
	int r, c ,zr, zc;
	scanf("%d %d %d %d", &r, &c, &zr, &zc);
	char str[101][101];
	for(int i = 0; i < r; i++) scanf("%s", str[i]);
	for(int i = 0; i < r; i++){
		int x = zr;
		while(x--){
			for(int j = 0; j < c; j++){
				int y = zc;
				while(y--){
					putchar(str[i][j]);	
				}
			}
			putchar('\n');			
		}
	}
	return 0;
}