#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	while(1){
		int input[3] = {0};
		for(int i = 0; i < 3;i++) scanf("%d", &input[i]);

		sort(input, input+3);
		if(input[2] == 0) break;
		else if(input[0] == input[2]) printf("Equilateral\n");
		else if(input[0] + input[1] <= input[2]) printf("Invalid\n");
		else if(input[0] == input[1] || input[1] == input[2]) printf("Isosceles\n");
		else printf("Scalene\n");
	}
	return 0;
}