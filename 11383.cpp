#include <stdio.h>

char orgin_str[10][100];
char double_str[10][100];

int main(){
	int n, len;
	scanf("%d %d", &n, &len);
	for(int i = 0; i < n; i++){
		scanf("%s", orgin_str[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%s", double_str[i]);
	}

	bool flag = true;
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < len; j++){
			
			if(orgin_str[i][j] != double_str[i][j*2] || orgin_str[i][j] != double_str[i][j*2+1]){
				flag = false;
				break;
			}
		}
	}
	if(flag) printf("Eyfa\n");
	else printf("Not Eyfa\n");

	return 0;
}