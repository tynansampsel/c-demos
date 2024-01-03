#include <stdio.h>

pointerfun() {
	printf("[[[[[ pointerfun.c ]]]]]\n");
	//int arrayTwo[5] = { 66, 77, 88, 99, 111 };

	//int arrayOne[5] = { 11, 22, 33, 44, 55 };


	printArray();

	//printf("%d", *arrayOne -2);

	return 0;
}

printArray() {
	int arrayOne[5] = { 11, 22, 33, 44, 55 };

	for (int i = 0; i < 5; i++) printf(" %d,", *arrayOne + i);

	return 0;
}