#include <stdio.h>


arrays() {
	printf("[[[[[ arrays.c ]]]]]\n");
	int numberArray[] = { 5, 10, 15, 20, 25 };
	int length = sizeof(numberArray) / sizeof(numberArray[0]);



	printf("numberArray length is %d\n", length);
	return 0;
}