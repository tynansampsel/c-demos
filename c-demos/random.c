#include <stdio.h>
#include <stdlib.h>

random() {
	
	for (int i = 0; i < 20; i++) {
		int r = rand() % 20;
		//int r = rand() % (20 - 1 + 1) + 1;


		printf("%d\n", r);
	}

	return 0;
}
