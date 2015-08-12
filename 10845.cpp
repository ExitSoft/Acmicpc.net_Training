#include "stdio.h"
#include "string.h"

int queue[100000];
int rear = 0, front = 0;


bool empty(){
	return rear == front;
}

void enqueue(int n){
	queue[rear++] = n;
}

int dequeue(){
	return queue[front++];
}


int get_size(){
	return rear - front;
}

int get_back(){
	return queue[rear-1];
}

int get_front(){
	return queue[front];
}


int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		char input[100];
		scanf("%s", input);
		if(strcmp(input, "push") == 0){
			int tmp;
			scanf("%d", &tmp);
			enqueue(tmp);
		}
		else if(strcmp(input, "pop") == 0){
			if(!empty())
				printf("%d\n", dequeue());
			else
				printf("%d\n", -1);

		}
		else if(strcmp(input, "size") == 0){
			printf("%d\n", get_size());
		}
		else if(strcmp(input, "empty") == 0){
			printf("%d\n", empty());
		}
		else if(strcmp(input, "front") == 0){
			if(!empty())
				printf("%d\n", get_front());
			else
				printf("%d\n", -1);
		}
		else if(strcmp(input, "back") == 0){
			if(!empty())
				printf("%d\n", get_back());
			else
				printf("%d\n", -1);
		}
	}

	return 0;
}