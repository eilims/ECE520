#include <stdio.h>

int main(int argc, char** argv){
	int count = 0;
	int i = 0;
	for (i = 0; i <= 10; i++){
		if (i > 3) count++;
	}
	printf("There are %d numbers greater than 3 from 1 - 10\n", count);
}