#include "stdio.h"

int graph[1000][1000] = {0};
int visited[1000] = {0};
int result[1000] = {0};

int queue[1000] = {0};
int rear = 0, front =0;

int people;
int start, end;

bool empty(){
	return rear == front;
}

void enqueue(int n){
	queue[rear++] = n;
}

int dequeue(){
	return queue[front++];
}

void bfs(int n, int c){
	visited[n] = 1;
	if(n == end){
		// result[n] = c+1;
		return;
	}
	for(int i = 1; i <= people; i++){
		if(graph[n][i] != 0 && !visited[i]){
			visited[i] = 1;
			result[i] = c + 1;
			enqueue(i);
		}
	}

	if(!empty()){
		int temp = dequeue();
		bfs(temp, result[temp]);
	}

	// printf("?\n");

}

int main(){
	
	
	int num;
	scanf("%d",&people);
	scanf("%d %d", &start, &end);
	scanf("%d", &num);
	for(int i = 0; i <= people+1; i++){
		for(int j = 0; j <= people+1; j++){
			graph[i][j] = 0;
		}
	}

	while(num--){
		int x,y;
		scanf("%d %d", &x, &y);
		graph[x][y] = y;
		graph[y][x] = x;
	}

	// for(int i = 1; i <= people; i++){
	// 	for(int j = 1; j <= people; j++){
	// 		printf("%d ", graph[i][j]);
	// 	}
	// 	printf("\n");
	// }
	// visited[start] = 1;
	bfs(start, 0);
	// for(int i = 1; i <= people; i++){
	// 	printf("%d ", result[i]);
	// }
	// printf("\n");
	if(result[end] == 0){
		printf("-1\n");
	}
	else{
		printf("%d\n", result[end]);
	}

	return 0;
}