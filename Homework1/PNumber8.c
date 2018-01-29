#include <stdio.h>

int sumElementsInArray(int array[]){
	int i = 0;
	int sum = 0;
	for (i = 1; i < array[0]; i++){
		sum += array[i];
	}
	return sum;
}

int main(int argc, char** argv){
	int i = 0;
	int array[10 + 1];
	array[0] = 10;
	for (i = 1; i < 11; i++){
		array[i] = i;
	}
	int sum = sumElementsInArray(array);
	printf("Sum: %d", sum);
	return 0;
}