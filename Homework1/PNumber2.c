#include <stdio.h>

int main(int argc, char** argv){
	int i = 0;
	int triangleSize = 10;
	char leftSide[triangleSize+1], rightSide[triangleSize+1], easy[triangleSize+1];
	for (i = 0; i < triangleSize; i++) {
		leftSide[i] = ' ';
		rightSide[i] = ' ';
		easy[i] = ' ';
	}
	
	leftSide[triangleSize] = '\0';
	rightSide[triangleSize] = '\0';
	easy[triangleSize] = '\0';
	
	for (i = 0; i < triangleSize; i++) {
		printf("%s*%s\n", leftSide, rightSide);
		leftSide[(triangleSize - 1) - i] = '*';
		rightSide[i] = '*';
	}
	
	for (i = 0; i < triangleSize + 1; i++) {
		printf("%s*%s\n", leftSide, rightSide);
		rightSide[(triangleSize - 1) - i] = ' ';
		leftSide[i] = ' ';
	}
	
	for (i = 0; i < triangleSize; i++) {
		printf("%s\n", easy);
		easy[i] = '*';
	}
	
	for (i = 0; i < triangleSize; i++) {
		printf("%s\n", easy);
		easy[(triangleSize - 1) - i] = ' ';
	}
}