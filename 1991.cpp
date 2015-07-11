#include "stdio.h"
#include "stdlib.h"

typedef struct Node{
	char data;
	struct Node *left;
	struct Node *right;
	/* data */
}Node;

Node* create_node(char new_data){
	Node* node = (Node*)malloc(sizeof(Node));
	node -> left = NULL;
	node -> right = NULL;
	node -> data = new_data;
	return node;
}

void preorder(Node* node){
	if(node == NULL){
		return;
	}
	printf("%c", node -> data);
	preorder(node -> left);
	preorder(node -> right);
}

void inorder(Node* node){
	if(node == NULL){
		return;
	}
	inorder(node -> left);
	printf("%c", node -> data);
	inorder(node -> right);	
}

void postorder(Node* node){
	if(node == NULL){
		return;
	}
	postorder(node -> left);
	postorder(node -> right);		
	printf("%c", node -> data);
}

int main(){
	int num;
	scanf("%d",&num);
	char arr[100][3];
	Node* nodes[100];

	for(int i = 0; i < num; i++){
		char data[2], left[2], right[2];
		scanf("%s %s %s", data, left, right);
		arr[i][0] = data[0];
		arr[i][1] = left[0];
		arr[i][2] = right[0];
		nodes[i] = create_node(data[0]);
	}

	for(int i = 0; i < num; i++){
		for(int j = 0; j < num; j++){
			if(nodes[j] -> data == arr[i][1]){
				nodes[i] -> left = nodes[j];
			}

			if(nodes[j] -> data == arr[i][2]){
				nodes[i] -> right = nodes[j];
			}
		}
	}

	preorder(nodes[0]);
	printf("\n");
	inorder(nodes[0]);
	printf("\n");
	postorder(nodes[0]);
	printf("\n");




	return 0;
}