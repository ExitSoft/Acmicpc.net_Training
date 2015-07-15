#include "stdio.h"

int arr[100][100];
int num;
int count = 0;

void func(int n){

	bool flag = true;
	for(int i = 0; i < num; i++){
		if(arr[n][i] == 1){
			flag = false;
			func(i);
		}

	}
	if(flag){
		count++;
	}
}

int main(){
	
	

	scanf("%d",&num);
	int root;
	for(int i = 0; i < num; i++){
		int temp;
		scanf("%d", &temp);
		if(temp == -1){
			root = i;
		}
		for(int j = 0; j < num; j++){
			if(temp != -1)
				arr[temp][i] = 1;
		}
	}
	int del;
	scanf("%d",&del);
	for(int i = 0; i < num; i++){
		arr[i][del] = 0;
	}

	if(del == root){
		printf("0\n");
		return 0;
	}
	func(root);

	printf("%d\n", count);

	return 0;
}