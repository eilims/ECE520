#include <stdio.h>

int multByTwo(int number){
	return number * 2;
}

int main(int argc, char** argv){
	int i = 0;
	for (i = 1; i <= 10; i++){
		printf("Input: %d Output: %d\n", i, multByTwo(i));
	}
}