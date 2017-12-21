#include <stdio.h>
#include <string.h>

int main() {
	
	char input[20];
	printf("What  is your name?\n");
	scanf("%s", input);

	printf("Well hello, %s!\n", input);

	int inputlen = strlen(input);

	printf("Your name is %d characters long\n", inputlen);
	
	return 0;

}
