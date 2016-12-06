#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int cnt;
	scanf("%d", &cnt);
	while(cnt--){
		int n;
		scanf("%d", &n);

		char name[101][21];
		int count[101];
		for(int i = 0; i < n; i++){
			scanf("%s %d", name[i], &count[i]);
		}

		int max = 0;
		int max_index = 0;
		for(int i = 0; i < n; i++){
			if(count[i] > max){
				max = count[i];
				max_index = i;	
			} 
		}

		printf("%s\n", name[max_index]);

	}

	return 0;
}