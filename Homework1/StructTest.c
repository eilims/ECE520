#include <stdio.h>
#include <stdlib.h>

struct Node {
		int value;
};

int createArray(struct Node* array[], int size){
	int i = 0;
	for(i=0; i < size; i++){
		array[i] = malloc(sizeof(struct Node));
		array[i]->value = i * 2;
	}
	return 0;
}

int main(int argc, char** argv){
	struct Node node;
	node.value = 5;
	printf("%d\n", node.value);
	struct Node* nodePtr = malloc(sizeof(struct Node));
	nodePtr->value = 5;
	printf("%d\n", nodePtr->value);
	free(nodePtr);
	struct Node* nodeArray[5];
	createArray(nodeArray, 5);
	int i = 0;
	for(i=0;i<5;i++){
		free(nodeArray[i]);
	}
	return 0;
}