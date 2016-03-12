#include <stdio.h>
#include <string.h>

int cnt;
char str[30000][100];

// void my_strcpy(char *s1, char *s2){
// 	for(int i = 0; i < strlen(s2); i++){
// 		s1[i] = s2[i];
// 	}
// }

void print(){
	putchar('\n');
	for(int i = 0; i < cnt; i++){

		printf("%s\n", str[i]);
	}
}

void sort(int start, int end){
	for(int i = start; i < end; i++){
		for(int j = start; j < end - i - 1; j++){
			if(strcmp(str[j], str[j+1]) > 0){
				char temp[100];
				strcpy(temp, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], temp);
			}
		}
		// print();
	}
}

int main(){
	
	scanf("%d", &cnt);
	for(int i = 0; i < cnt; i++){
		scanf("%s", str[i]);
	}
	// putchar('\n');
	// for(int i = 0; i < cnt; i++){

	// 	printf("%s\n", str[i]);
	// }
	// print();

	for(int i = 0; i < cnt; i++){
		for(int j = 0; j < cnt - i - 1; j++){
			if(strlen(str[j]) > strlen(str[j+1])){
				char temp[100];
				strcpy(temp, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], temp);
			}
		}
	}
	print();

	int start = 0;
	int end = 0;

	for(int i = 0; i < cnt; i++){
		if(strlen(str[i]) != strlen(str[i+1])){
			end = i+1;
			printf("start : %d end : %d \n", start, end);
			sort(start, end);
			start = end;
		}
	}

	

	print();
	return 0;
}