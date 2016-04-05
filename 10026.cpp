#include <stdio.h>

char graph[105][105];
char graph2[105][105];
int count = 0;
int count2 = 0;


void dfs(char ch, int x, int y){
	
	if(graph[x][y] != ch || x < 0 || y < 0){ 
		if(graph[x][y] != 'a') count++;
		return;
	}
	graph[x][y] = 'a';
	
	if(graph[x+1][y] == ch) dfs(ch, x+1, y);
	if(graph[x-1][y] == ch) dfs(ch, x-1, y);
	if(graph[x][y+1] == ch) dfs(ch, x, y+1);
	if(graph[x][y-1] == ch) dfs(ch, x, y-1);
	return;
}


void dfs2(char ch, int x, int y){
	
	if(graph2[x][y] != ch || x < 0 || y < 0){ 
		if(graph2[x][y] != 'a') count++;
		return;
	}
	graph2[x][y] = 'a';
	
	if(graph2[x+1][y] == ch) dfs2(ch, x+1, y);
	if(graph2[x-1][y] == ch) dfs2(ch, x-1, y);
	if(graph2[x][y+1] == ch) dfs2(ch, x, y+1);
	if(graph2[x][y-1] == ch) dfs2(ch, x, y-1);
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", graph[i]);
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(graph[i][j] == 'G') graph2[i][j] = 'R';
			else graph2[i][j] = graph[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(graph[i][j] != 'a'){
				count++;
				dfs(graph[i][j], i, j);
			}
			if(graph2[i][j] != 'a'){
				count2++;
				dfs2(graph2[i][j], i, j);
			}
			
		}
		
	}

	printf("%d %d\n", count, count2);

	return 0;
}