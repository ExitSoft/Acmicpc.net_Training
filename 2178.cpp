#include <stdio.h>

int n, m;
int map[1000][1000];
int visited[1000][1000];
int min_cnt = 0;

int queue[10000];
int front = 0, rear = 0;

void enqueue(int n){
	queue[front++] = n;
}

int dequeue(){
	return queue[rear++];
}

bool empty(){
	return front == rear;
}

void func(int x, int y, int n){
	// printf(">\n");
	map[x][y] = n;
	visited[x][y] = 1;
	if(x == n && y == m){
		// if(min_cnt > n+1) min_cnt = n+1;
		return;
	}
	else{
		if(map[x-1][y] != -1 && !visited[x-1][y]){
			map[x-1][y] = n+1;
			visited[x-1][y] = 1;
			enqueue((x-1)*10000+y);
		}
		if(map[x+1][y] != -1 && !visited[x+1][y]) {
			map[x+1][y] = n+1;
			visited[x+1][y] = 1;
			enqueue((x+1)*10000+y);
		}
		if(map[x][y+1] != -1 && !visited[x][y+1]){
			map[x][y+1] = n+1;
			visited[x][y+1] = 1;
			enqueue(x*10000+y+1);
		}
		if(map[x][y-1] != -1 && !visited[x][y-1]){
			map[x][y-1] = n+1;
			visited[x][y-1] = 1;
			enqueue(x*10000+y-1);
		}

		if(!empty()){
			int tmp = dequeue();
			return func(tmp/10000, tmp%10000, map[tmp/10000][tmp%10000]);	
		}
		
	}


}

void map_print(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++)
			printf("%d ", map[i][j]);
		printf("\n");	
	}
	
}

int main(){

	for(int i = 0; i < 1000; i++)
		for(int j = 0; j < 1000; j++)
			map[i][j] = -1;

	
	scanf("%d %d", &n, &m);

	for(int i = 1; i <= n; i++){
		char str[1000];
		scanf("%s", str);
		for(int j = 0; j < m; j++){
			map[i][j+1] = (str[j] - '0')-1;
		}

	}

	// map_print();
	func(1,1,1);

	// map_print();
	printf("%d\n", map[n][m]);






	return 0;
}