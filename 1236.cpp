#include <stdio.h>

int n, m;

int select_x[100] = {0};
int select_y[100] = {0};

int main(){
	
	scanf("%d %d", &n, &m);

	for(int i = 0; i < n; i++){
		char input[1000];
		scanf("%s", input);
		for(int j = 0; j < m; j++){
			if(input[j] == 'X'){
				select_x[i] = -1;
				select_y[j] = -1;
			}
		}
	}

	int result_x = 0, result_y = 0;

	for(int i = 0; i < n; i++){
		if(select_x[i] == 0) result_x++;
	}
	for(int j = 0; j < m; j++){
		if(select_y[j] == 0) result_y++;
	}

	printf("%d\n", (result_x > result_y)? result_x : result_y);

	return 0;
}