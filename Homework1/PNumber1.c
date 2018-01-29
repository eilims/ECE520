#include <stdio.h>

int main(int argc, char** argv){
	int i = 0;
	for (i = 1; i < 11; i++) {
		printf("%d		%d\n", i, (i * i));
	}
}