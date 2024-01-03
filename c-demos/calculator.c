#include <stdio.h>

calculator() {
	printf("[[[[[ calculator.c ]]]]]\n");

	double subtotal;
	double tax;
	double grandtotal;
	double taxrate;

	taxrate = 0.175;
	subtotal = 250;

	tax = subtotal * taxrate;
	grandtotal = subtotal + tax;

	printf("Subtotal:%.2f tax:%.2f    grandtotal:%.2f\n", subtotal, tax, grandtotal);

	return 0;
}