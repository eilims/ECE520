#include <stdio.h>

int factorial(int number){
	int i = 0;
	int factorial = 1;
	for(i=number; i > 0; i--){
		factorial = factorial * i;
	}
	return factorial;
}

int power(int number, int power){
	int i = 0;
	int powerNum = 1;
	for (i = 0; i < power; i++){
		powerNum = powerNum * number;
	}
	return powerNum;
}

int evenOrOdd(int term){
	if (term%2==0){
		return -1;
	} else {
		return 1;
	}
}

int main(int argc, char** argv){
	int x;
	int terms;
	int i;
	double sum;
	printf("Input the value of X: ");
	scanf("%d", &x);
	printf("Input the number of terms: ");
	scanf("%d", &terms);
	for (i = 0; i < terms; i++){
		sum += factorial(power(2,i)) + (evenOrOdd(i) * power(x, power(2, i+1)));
		printf("Sum: %f\n", sum);
	}
	printf("Sum: %f", sum);
}