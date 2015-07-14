#include "stdio.h"
int graph[1000][1000] = {0};
int visited[1000] = {0};

int coumputer_count;

int queue[1000];
int front = 0, rear = 0;


void enqueue(int n){
	queue[rear++] = n;
}

int dequeue(){
	return queue[front++];
}

bool empty(){
	return rear == front;
}
void dfs(int n){
	printf("%d ", n);
	visited[n] = 1;
	for(int i = 1; i <= coumputer_count; i++){
		if(graph[n][i] == 1 && !visited[i]){
			
			dfs(i);
		}
	}
}

void bfs(int n){
	printf("%d ", n);
	visited[n] = 1;
	for(int i = 1; i <= coumputer_count; i++){
		if(graph[n][i] == 1 && !visited[i]){
			visited[i] = 1;
			enqueue(i);
		}
	}
	if(!empty()){
		bfs(dequeue());
	}
}

int main(){
	
	int num;
	int start;

	scanf("%d %d %d", &coumputer_count, &num, &start);

	while(num--){
		int x,y;
		scanf("%d %d", &x, &y);
		graph[x][y] = 1;
		graph[y][x] = 1;
	}
	// for(int i = 1; i <= coumputer_count; i++){
	// 	for(int j = 1; j <= coumputer_count; j++){
	// 		printf("%d ", graph[i][j]);
	// 	}
	// 	printf("\n");
	// }

	dfs(start);
	printf("\n");
	for(int i = 0; i <= coumputer_count; i++){
		visited[i] = 0;
	}
	bfs(start);
	printf("\n");



	return 0;
}