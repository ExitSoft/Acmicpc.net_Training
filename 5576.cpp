#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int result = 0;
	int input[10];
	for(int i = 0; i < 10; i++) scanf("%d", &input[i]);
	sort(input, input+10);
	result = input[9] + input[8] + input[7];
	printf("%d ", result);

	for(int i = 0; i < 10; i++) scanf("%d", &input[i]);
	sort(input, input+10);
	result = input[9] + input[8] + input[7];
	printf("%d\n", result);

	return 0;
}