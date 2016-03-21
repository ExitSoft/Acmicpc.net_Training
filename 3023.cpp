#include <stdio.h>

int n, m;
int cnt_x = 1, cnt_y = 1;
int err_x, err_y;
int map[10000][10000];

void print(int x, int y){
	if(cnt_x == err_x && cnt_y == err_y){
		if(map[x][y] == '#') printf(".");
		else printf("#");
	}
	else{
		printf("%c", map[x][y]);
	}
}

void map_print(){
	for(int i = 0; i < n; i++){
		cnt_y = 1;
		for(int j = 0; j < m; j++){
			// printf("%c", map[i][j]);
			print(i,j);
			cnt_y++;
		}
		for(int j = m-1; j >= 0; j--){
			// printf("%c", map[i][j]);
			print(i,j);
			cnt_y++;
		}
		printf("\n");
		cnt_x++;
	}
	for(int i = n-1; i >= 0; i--){
		cnt_y = 1;
		for(int j = 0; j < m; j++){
			// printf("%c", map[i][j]);
			print(i,j);
			cnt_y++;
		}
		for(int j = m-1; j >= 0; j--){
			// printf("%c", map[i][j]);
			print(i,j);
			cnt_y++;
		}
		printf("\n");
		cnt_x++;
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		char str[10000];
		scanf("%s", str);
		for(int j = 0; j < m; j++){
			map[i][j] = str[j];
		}
	}
	scanf("%d %d", &err_x, &err_y);
	map_print();
	return 0;
}