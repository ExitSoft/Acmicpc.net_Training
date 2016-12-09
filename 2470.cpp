#include <stdio.h>
#include <algorithm>

using namespace std;


int abs(int n){
	return (n > 0)? n : -n;
}

int main(){
	int n;
	int input[100001];
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &input[i]);
	}

	sort(input, input+n);

	int a, b;
	int degree = 999999;
	int low = 0, high = n-1;

	while(low < high){
		if(degree > abs(input[low] + input[high])){
			a = input[low];
			b = input[high];
			degree = abs(input[low] + input[high]);
		}
		if(input[low] + input[high] < 0) low++;
		else if(input[low] + input[high] > 0) high--;
		else break;
	}

	printf("%d %d\n", a, b);


	


	return 0;
}