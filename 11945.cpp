#include <stdio.h>

int arr[100][100];

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		char input[100];
		scanf("%s", input);
		for(int j = 0; j < m; j++){
			arr[i][j] = input[j] - '0';
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = m-1; j >= 0; j--){
			putchar(arr[i][j]+'0');
		}
		putchar('\n');
	}
	return 0;
}