#include <stdio.h>

stringfun() {
	printf("[[[[[ stringfun.c ]]]]]\n");

	char string[] = "Hello World";
	
	int hitNullCharacter = 0;
	int index = 0;
	while (hitNullCharacter == 0) {
		if (string[index] == '\0') {
			printf("\nstring end!\n");
			hitNullCharacter = 1;
		}
		else {
			printf("%c", string[index]);
			index++;
		}
	}


	printf("%s", string);

	return 0;
}