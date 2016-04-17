#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[1005] = {0};
int d[1005] = {0};

int main(){
	int n, sum = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d", &arr[i]);
	sort(arr, arr+n+1);
	// for(int i = 1; i <= n; i++){
	// 	printf("%3d", arr[i]);
	// }
	// putchar('\n');
	for(int i = 1; i <= n; i++){
		d[i] = d[i-1] + arr[i];
		// printf("%4d", d[i]);
		sum += d[i];
	}
	// putchar('\n');
	printf("%d\n", sum);



	return 0;
}