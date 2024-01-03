#include <stdio.h>

main() {
	chooseDemo();
	return 0;
}

chooseDemo() {
	int quit = 0;
	while (quit == 0) {
		char string[20];
		printf("helloworld\n");
		printf("calculator\n");
		printf("arrays\n");
		printf("bubblesort\n");
		printf("pointerfun\n");
		printf("stringfun\n");
		printf("inputtest\n");
		printf("random\n");
		printf("shuffling\n");
		printf("displaytime\n");
		printf("quit\n");
		printf("please select a demo from the list above:");
		fgets(string, 20, stdin);

		printf("\n");

		//removing the new line character from the string
		for (int i = 0; i < 20; i++) {
			if (string[i] == '\n') {
				string[i] = '\0';
			}
		}

		if (strcmp(string, "helloworld") == 0) {
			helloworld();

		}
		else if (strcmp(string, "calculator") == 0) {
			calculator();

		}
		else if (strcmp(string, "arrays") == 0) {
			arrays();

		}
		else if (strcmp(string, "bubblesort") == 0) {
			bubblesort();

		}
		else if (strcmp(string, "pointerfun") == 0) {
			pointerfun();

		}
		else if (strcmp(string, "stringfun") == 0) {
			stringfun();

		}
		else if (strcmp(string, "inputtest") == 0) {
			inputtest();

		}
		else if (strcmp(string, "random") == 0) {
			random();

		}
		else if (strcmp(string, "shuffling") == 0) {
			shuffling();

		}
		else if (strcmp(string, "displaytime") == 0) {
			displaytime();

		}
		else if (strcmp(string, "quit") == 0) {
			quit = 1;

		}
		else {
			printf("%s did not match any of the choices.", string);
		}
		printf("\n\n\n\n");
	}
}