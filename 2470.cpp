#include <stdio.h>
#include <algorithm>

using namespace std;


// 정수 n이 0부터 얼마나 떨어져있는지는 n의 절대값과 같다.
// 따라서 절대값을 구하는 abs 함수를 선언한다.
int abs(int n){
	// 정수 n이 들어왔을 때, n이 양수면 그대로 return, n이 음수면 -n을 return하는 함수이다.
	// 만약, n이 0이 들어와도, -0은 0이기 때문에 알고리즘 상에는 문제가 없다.
	return (n > 0)? n : -n;
}

int main(){

	// 입력값을 몇 개를 받을 지 알 수있도록 변수 n을 선언한다.
	int n;

	// 들어오는 n의 범위가 2이상 100,000이하 이기 때문에, 100,001개의 배열을 생성한다.
	// 딱 99,999개를 생성해도 되지만, 배열의 크기가 작을 경우에 Buffer Overflow가 발생할 수 있으므로
	// 조금 더 여유 있게 배열을 생성하도록 한다.

	// 이때 각 input의 범위는 -1,000,000,000 이상 1,000,000,000 이하 이므로, int의 범위를 초과하지 않기때문에
	// 변수 타입은 int로 선언한다.
	int input[100001];

	// scanf 함수를 이용하여, n을 입력받는다.
	scanf("%d", &n);

	// 0부터 n-1번까지 n번을 반복하여 배열안에 값을 입력받는다.
	for(int i = 0; i < n; i++){
		scanf("%d", &input[i]);
	}

	// C++ STL에 내장되어있는 sort 함수를 이용하여 오름차순 정렬을 시행한다.
	// 이 문제에서는 오름차순대로 값을 입력받기에 굳이 sort할 필요는 없다.
	sort(input, input+n);

	// 값을 담을 변수 a와 b를 선언한다.
	int a, b;

	// a+b의 값이 0 부터 얼마나 떨어져있는지에 대한 거리 값을 담을 degree라는 변수를 선언한다.
	// 이때 degree의 범위는 0 ~ 199이다.
	// 우리가 구하고 싶은 최상의 값은 degree가 0일 때이지만,
	// 최악의 경우인 199보다 이상의 수로 시작해서 점차 작은 수를 찾아나가도록 한다.
	int degree = 999999;

	// input배열의 처음과 끝의 index를 가르키는 정수 left와 right를 선언한다.
	// left는 가장 왼쪽에 있는 수인 0, right는 가장 오른쪽에 있는 수인 n-1으로 선언한다.
	// 이 때 right = n으로 선언하지 않도록 주의해야한다.

	// 길이가 n인 배열을 선언할 경우, 0 부터 시작해서 n-1번까지의 방이 만들어진다.
	// 따라서 n번째 방을 참조하려고 할 경우에는 Buffer Overflow가 발생한다.
	int left = 0, right = n-1;

	// left가 right보다 작을 때까지 계속 반복한다.
	while(left < right){

		// 만약 left번째의 값과 right번째의 합의 절대값이 기존의 degree보다 작을 경우는
		// 두 수의 합이 이전에 구했던 합보다 0에 가깝다는 뜻이다.
		// 따라서 더욱 가까운 수로 갱신해줘야 한다.

		if(degree > abs(input[left] + input[right])){
			// a, b를 각각 left번째, right번째 값으로 갱신한 뒤
			a = input[left];
			b = input[right];
			// degree도 left번째 값과 right번째의 값의 합의 절대값으로 갱신한다.
			degree = abs(input[left] + input[right]);
		}
		// 만약에 left번째의 값과 right번째의 값의 합이 음수일 경우에는
		// left번째의 값을 오른쪽으로 한 칸 움직인다.
		// left번째 값을 오른쪽으로 한 칸 움직이면, 배열이 오름차순으로 정렬되어 있기 때문에, 합이 커지게 된다.
		if(input[left] + input[right] < 0) left++;
		// 반대로 left 번째의 값과 right 번째의 값의 합이 양수일 경우에는
		// right번째의 값을 왼쪽으로 한 칸 움직인다.
		// right번째 값을 왼쪽으로 한 칸 움직이면, 배열이 오름차순으로 정렬되어 있기 때문에, 합이 작아지게 된다.
		else if(input[left] + input[right] > 0) right--;
		// left번째의 값과 right번째의 합이 음수도 아니고, 양수도 아니면 0인 경우이다.
		// 합이 0인 경우는 최상의 결과 값을 찾은 상태이므로 더 이상 탐색할 이유가 없기 때문에
		// 강제적으로 반복문에서 빠져나온다.
		else break;
	}

	// 각각 a,b값을 출력한다.
	printf("%d %d\n", a, b);

	return 0;
}