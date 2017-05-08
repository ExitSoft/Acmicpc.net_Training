#include <stdio.h>
#include <algorithm>

using namespace std;

int l, c;
int arr[100];
int res[100];

void print_arr(){
	for(int i = 0; i < l; i++){
		printf("%c", res[i]);
	}
	putchar('\n');
}

void dfs(int n, int index){
	if(index > c) return;
	res[n-1] = arr[index];
	if(l == n){
		int a = 0;
		int b = 0;
		for(int i = 0; i < c; i++){
			if(res[i] == 'a' || res[i] == 'e' || res[i] == 'i' || res[i] == 'o' || res[i] == 'u')
				a++;
			else b++;
		}
		if(a >= 1 && b >= 2) return print_arr();	
		else return;
	}
	for(int i = index+1; i < c; i++){
		dfs(n+1, i);
	}
}

int main(){
	
	scanf("%d %d\n", &l, &c);
	for(int i = 0; i < c; i++){
		char t;
		if(i < c-1) scanf("%c ", &t);
		else scanf("%c", &t);
		arr[i] = t;
	}
	sort(arr, arr+c);
	// for(int i = 0; i < c; i++){
	// 	printf("%c", arr[i]);
	// }
	// putchar('\n');
	for(int i = 0; i < c; i++){
		dfs(1, i);
	}


	return 0;
}