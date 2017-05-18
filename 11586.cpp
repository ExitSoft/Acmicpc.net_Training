#include <stdio.h>

char input[101][101];
int n;
void reverse_Horizontal(){
	for(int i = 0; i < n ; i++){
		for(int j = n-1; j >= 0; j--){
			putchar(input[i][j]);
		}
		putchar('\n');
	}
}

void reverse_Vertical(){
	for(int i = n-1; i >= 0; i--){
		for(int j = 0; j < n; j++){
			putchar(input[i][j]);
		}
		putchar('\n');
	}
}

void print(){
	for(int i = 0; i < n; i++){
		printf("%s\n", input[i]);
	}
}

int main(){
	
	
	scanf("%d", &n);
	int select;
	for(int i = 0; i < n; i++) scanf("%s", input[i]);
	scanf("%d", &select);
	if(select == 1) print();
	else if(select == 2) reverse_Horizontal();
	else if(select == 3) reverse_Vertical();

	return 0;
}