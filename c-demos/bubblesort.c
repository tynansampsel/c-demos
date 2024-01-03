#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bubblesort() {
	printf("[[[[[ bubblesort.c ]]]]]\n");
	//srand(time.)

	time_t currentTime;
	time(&currentTime);
	//seed rand. this is not ideal but works well enough
	srand(currentTime);

	int unsortedArr[20];
	int unsortedArrLength = sizeof(unsortedArr) / sizeof(unsortedArr[0]);

	//fill array
	for (int i = 0; i < unsortedArrLength; i++) {
		unsortedArr[i] = i;
	}

	//scramble array
	for (int i = (unsortedArrLength-1); i > 0; i--) {
		int j = rand() % (i + 1);

		int iv = unsortedArr[i];
		int jv = unsortedArr[j];
		unsortedArr[i] = jv;
		unsortedArr[j] = iv;
	}

	//display shuffled array
	printf("shuffled array: [");
	for (int i = 0; i < unsortedArrLength; i++) printf(" %d,", unsortedArr[i]);
	printf("]\n");
	
	
	printf("sorting array. . .\n");

	
	//bubble sort
	int isSorted = 0;
	int maxLoops = 10000; // this is just to make sure the while loop doesnt loop on forever incase theres a problem.
	int loops = 0;

	while (isSorted == 0 && loops < maxLoops) {
		int foundUnsorted = 0;
		for (int i = 0; i < (unsortedArrLength-1); i++) {
			if (unsortedArr[i] > unsortedArr[i + 1]) {
				foundUnsorted = 1;

				int a = unsortedArr[i];
				int b = unsortedArr[i+1];

				unsortedArr[i] = b;
				unsortedArr[i+1] = a;
			}
		}

		if (foundUnsorted == 0) isSorted = 1;
		loops++;
	}

	if (loops >= maxLoops && isSorted == 0) {
		printf("The bubblesort could not be sorted. too many loops inside the while loop. \n");

	}
	else {
		printf("sorted array: [");
		for (int i = 0; i < unsortedArrLength; i++) printf(" %d,", unsortedArr[i]);
		printf("]\n");
	}

	return 0;
}