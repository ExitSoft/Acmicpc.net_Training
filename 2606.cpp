#include "stdio.h"

int arr[1000][1000]={0};
int visit[1000] = {0};
int virus = 0;
int computer_count;

void func(int n){
	visit[n] = 1;	
	for(int i = 1; i <= computer_count; i++){
		if(arr[n][i] == 1 && visit[i] == 0){
			virus++;
			func(i);
		}
	}
}


int main(){
	

	
	int num;

	scanf("%d", &computer_count);
	scanf("%d", &num);

	while(num--){
		int a,b;
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;

	}

	func(1);

	printf("%d\n", virus);
	return 0;
}