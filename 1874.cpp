#include <stdio.h>
#include <stack>
#include <queue>

using namespace std;

int main(){
	stack<int> st;
	queue<char> q;

	int n;
	scanf("%d", &n);
	int index = 1;
	while(n--){
		int input;
		scanf("%d", &input);
		
		while(st.empty() || st.top() < input){
			st.push(index++);	
			q.push('+');
		}

		if(st.top() == input){
			st.pop();
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