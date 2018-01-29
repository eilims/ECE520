#include <stdio.h>

int main(int argc, char** argv){
	int i = 0;
	int fibonacci1 = 0;
	int fibonacci2 = 1;
	printf("%d\n", 0);
	printf("%d\n", fibonacci2);
	for (i = 0; i < 8; i++){
		int temp = fibonacci1 + fibonacci2;
		fibonacci1 = fibonacci2;
		fibonacci2 = temp;
		printf("%d\n", temp);
	}
}