#include <stdio.h>

int factorial(int number){
	int i = 0;
	int factorial = 1;
	for(i=number; i > 0; i--){
		factorial = factorial * i;
	}
	return factorial;
}

int main(int argc, char** argv){
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++){
		sum += (i + factorial(i + 1));
	}
	sum += i;
	printf("Sum: %d\n", sum);
}