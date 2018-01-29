#include <stdio.h>

int main(int argc, char** argv){
	int i = 0;
	int o = 0;
	for (i = 0; i < 7; i++){
		int factorial = 1;
		for(o=i; o > 0; o--){
			factorial = factorial * o;
		}
	printf("Integer: %d Factorial: %d\n", i, factorial);
	}
}