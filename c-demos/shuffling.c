#include <stdio.h>
#include <math.h>

shuffling() {
	int arr[20];
	int length = sizeof(arr) / sizeof(arr[0]);

	//fill array
	for (int i = 0; i < 20; i++) {
		arr[i] = i;
	}

	//scramble array
	for (int i = 19; i > 0; i--) {
		int j = rand() % (i + 1);

		int iv = arr[i];
		int jv = arr[j];
		arr[i] = jv;
		arr[j] = iv;
	}

	//display shuffled array
	printf("shuffled array: [");
	for (int i = 0; i < 20; i++) printf(" %d,", arr[i]);
	printf("]\n");
}