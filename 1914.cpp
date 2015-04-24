#include <stdio.h>
#include <math.h>
// int hanoi(){

// }



int main (void){
	int num = 0;
	scanf("%d", &num);
	int *block = new int[num];
	for (int i = 0; i < num; ++i)
	{
		block[i] = i + 1;
	}

	printf("%ld\n", int(pow(2.0,num)));




	return 0;
}