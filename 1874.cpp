#include <stdio.h>
#include <stack>
#include <queue>

using namespace std;

int main(){
	stack<int> s;
	queue<char> q;

	int n;
	scanf("%d", &n);
	int i = 1;
	while(n--){
		int x;
		scanf("%d", &x);
		
		while(s.empty() || s.top() < x){
			s.push(i++);	
			q.push('+');
		}

		if(s.top() == x){
			s.pop();
			q.push('-');
		}
		else {
			printf("NO\n");
			return 0;
		}
	}
	while(!q.empty()){
		printf("%c\n", q.front());
		q.pop();
	}
	return 0;
}