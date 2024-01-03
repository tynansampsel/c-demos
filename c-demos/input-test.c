#include <stdio.h>


inputtest() {
	char string[10];
	printf("please say green:");
	fgets(string, 10, stdin);
	
	printf("\n");

	//removing the new line character from the string
	for (int i = 0; i < 10; i++) {
		if (string[i] == '\n') {
			string[i] = '\0';
		}
	}

	if (strcmp(string, "green") == 0) {
		printf("thank you!\n");
	}
	else {
		printf("'%s' is not green!", string);
	}
}