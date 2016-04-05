#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[5000001];

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
	sort(arr, arr+n);

	printf("%d\n", arr[k-1]);




	return 0;
}