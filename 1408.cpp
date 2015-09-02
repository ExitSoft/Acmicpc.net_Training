#include "stdio.h"
#include "string.h"

int arr1[100];
int arr2[100];

int main(){
	char input[100];
	char *str;

	scanf("%s", input);
	str = strtok(input, ":");
	int ndx = 0;
	while(str != NULL){
		// printf("%s\n", str);
		int tmp = 0;
		for(int i = 0; i < strlen(str); i++){
			tmp *= 10;
			tmp += (str[i] - '0');
		}
		arr1[ndx++] = tmp;
		str = strtok(NULL, ":");
	}

	scanf("%s", input);
	str = strtok(input, ":");
	ndx = 0;
	while(str != NULL){
		// printf("%s\n", str);
		int tmp = 0;
		for(int i = 0; i < strlen(str); i++){
			tmp *= 10;
			tmp += (str[i] - '0');
		}
		arr2[ndx++] = tmp;
		str = strtok(NULL, ":");
	}

	long long time1 = (arr1[2]) + (arr1[1] * 60) + (arr1[0] * 3600);
	long long time2 = (arr2[2]) + (arr2[1] * 60) + (arr2[0] * 3600);

	if(time1 < time2){
		long long tmp = time2 - time1;
		printf("%02lld:", tmp/3600);
		tmp %= 3600;
		printf("%02lld:", tmp/60);
		tmp %= 60;
		printf("%02lld\n", tmp);
	}
	else{
		long long tmp = 24*3600 - (time1 - time2);
		
		// printf("%lld\n", tmp);
		printf("%02lld:", tmp/3600);
		tmp %= 3600;
		printf("%02lld:", tmp/60);
		tmp %= 60;
		printf("%02lld\n", tmp);
	}
	// printf("%lld %lld\n", time1, time2);

	// for(int i = 0; i < 3; i++){
	// 	printf("%d\n", arr1[i]);
	// }


	return 0;
}