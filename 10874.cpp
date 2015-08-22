#include "stdio.h"

int main(){
	int arr[10000][10];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 10; j++){
			scanf("%d", &arr[i][j]);

		}
	}

	for(int i = 0; i < n; i++){
		bool flag = true;
		for(int j = 0; j < 10; j++){
			if(j%5+1 != arr[i][j]){
				flag = false;
				break;
			}
		}
		if(flag) printf("%d\n", i+1);
	}
	return 0;
}