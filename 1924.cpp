#include <stdio.h>
// SUN, MON, TUE, WED, THU, FRI, SAT
int main(){
	int x,y;
	int day = 0;
	scanf("%d %d", &x, &y);
	for(int i = 1; i < x; i++){
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
			day += 31;
		}
		else if(i == 2){
			day += 28;
		}
		else{
			day += 30;
		}
	}

	day += y;
	// printf("%d\n", day);
	day %= 7;

	switch(day){
		case 0:
		printf("SUN\n");
		break;
		case 1:
		printf("MON\n");
		break;
		case 2:
		printf("TUE\n");
		break;
		case 3:
		printf("WED\n");
		break;
		case 4:
		printf("THU\n");
		break;
		case 5:
		printf("FRI\n");
		break;
		case 6:
		printf("SAT\n");
		break;


	}
	return 0;
}