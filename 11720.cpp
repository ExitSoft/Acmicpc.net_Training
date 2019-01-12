#include <stdio.h>

int main() {
	int result = 0;
	int n;
	scanf("%d", &n);
	while(n--) {
		int x;
		scanf("%1d", &x);
		result += x;
	}

	printf("%d\n", result);
}