#include <stdio.h>

int main(){
	int month, day;
	scanf("%d %d", &month, &day);
	if(month == 1) printf("Before\n");
	else if(month == 2){
		if(day < 18) printf("Before\n");
		else if(day == 18) printf("Special\n");
		else printf("After\n");
	}
	else printf("After\n");
		
	return 0;
}