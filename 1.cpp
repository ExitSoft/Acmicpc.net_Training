/*

VC, GCC에서 사용

*/

#include <stdio.h>

void func(int n){
	if(n <= 1){
		printf("%d\n", n%2);
	}
	else{
		func(n/2);
	}
	printf("%d\n", n%2);
}

int main()
{

	int itr;
	int nCount;		/* 문제의 테스트 케이스 */

	scanf("%d", &nCount);	/* 테스트 케이스 입력 */

	for(itr=0; itr<nCount; itr++)
	{

		printf("#testcase%d\n",itr+1);

		int num;
		scanf("%d",&num);
		func(num);
		/*

		알고리즘이 들어가는 부분

		*/

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}