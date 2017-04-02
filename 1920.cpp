#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[100001];
int binSearch(int start, int end, int x) {
	int mid = (start + end) / 2;
	if(start > end) return 0;
	return (arr[mid] == x)? 1 : (x < arr[mid])? binSearch(start, mid-1, x) : binSearch(mid+1, end, x);
}

int main(void){
	int n, c;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

	sort(arr, arr+n);

	scanf("%d", &c);
	for(int i = 0; i < c; i++){
		int input;
		scanf("%d", &input);
		printf("%d\n", binSearch(0, n, input));	
	} 
	return 0;
}