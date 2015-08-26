#include "stdio.h"
#include "string.h"

int main(){
	int n;
	scanf("%d", &n);

	char input[1000];
	char utc[1000];

	scanf("%s", input);
	scanf("%s", utc);


	int std_hh = (input[0] - '0') * 10 + (input[1] - '0');
	int std_mm = (input[3] - '0') * 10 + (input[4] - '0');

	std_mm += (60 * std_hh);

	bool is_float = false;
	int tmp = 0;
	for(int i = 4; i < strlen(utc); i++){
		tmp += (utc[i] - '0');
		if(utc[i+1] == '.'){
			is_float = true;
			break;
		}
		else if(i == strlen(utc) -1) break;
		tmp *= 10;
	}
	tmp *= 60;
	if(is_float) tmp += 30;
	if(utc[3] == '+') tmp *= -1;

	std_mm += tmp;
	if(std_mm < 0) std_mm += 24 * 60;

	while(n--){
		int minute = std_mm;

		char new_utc[100];
		scanf("%s", new_utc);
		int tmp = 0;

		bool is_float = false;
		for(int i = 4; i < strlen(new_utc); i++){
			tmp += (new_utc[i] - '0');
			if(new_utc[i+1] == '.'){
				is_float = true;
				break;
			}
			else if(i == strlen(new_utc) -1) break;
			tmp *= 10;
		}

		tmp *= 60;
		if(is_float) tmp += 30;
		if(new_utc[3] == '-') tmp *= -1;

		minute += tmp;

		if(minute < 0) minute += 24*60;

		int mm = minute % 60;
		int hh = (minute / 60)%24;

		if(hh < 10){
			printf("0%d:", hh);
		}
		else{
			printf("%d:", hh);
		}

		if(mm < 10){
			printf("0%d\n", mm);
		}
		else{
			printf("%d\n", mm);
		}







	}
	return 0;
}