#include <stdio.h>

int countCharacterInString(char character, char string[], size_t stringLength){
	int i = 0;
	int count = 0;
	for (i = 0; i < stringLength; i++){
		if (character == string[i]){
			count++;
		}
	}
	return count;
}

int main(int argc, char** argv){
	printf("Please enter a string: ");
	char string[100];
	fgets(string, 100, stdin);
	printf("Please enter a character to count in the string: ");
	char character = getchar();
	size_t stringLength = (sizeof(string)/sizeof(char));
	printf("Times %c appears in %s: %d", character, string, countCharacterInString(character, string, stringLength));
}