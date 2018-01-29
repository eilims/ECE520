#include <stdio.h>

int main(int argc, char** argv){
	int i = 5;
	int* ip = &i;
	int* test = ip + 1;
	int* test1 = ip;
	printf("%d\n", *ip);
	*ip++ = 0;
	printf("%d\n", *ip);
	printf("%d\n", *test);
	printf("%d\n", *test1);
}