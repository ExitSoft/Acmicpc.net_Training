#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[15001] = {0};

int bin_search(int start, int end, int search){
	if(start > end) return -1;
	int mid = (start + end)/2;
	if(search == arr[mid]) return arr[mid];
	else if(search < arr[mid]) return bin_search(start, mid-1, search);
	else return bin_search(mid+1, end, search);
}

int main(){
	
	int n;
	int m;
	int c = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+n);

	for(int i = 0; i <= n/2; i++){
		int search = m - arr[i];
		if(search != arr[i] && bin_search(0, n-1, search) != -1){
			c++;
		} 
	}

	printf("%d\n", c);


	return 0;
}