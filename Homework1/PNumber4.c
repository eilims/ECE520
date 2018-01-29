#include <stdio.h>

int main(int argc, char** argv){
	int i = 0;
	double average = 0;
	for (i = 1; i <= 10; i++){
		average += i * i;
	}
	average = average / (i - 1);
	printf("The average of the numbers is %f\n", average);
}