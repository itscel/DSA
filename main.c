#include <stdio.h>
#include <stdbool.h>
#include "arrayimplementation.h"
// #include "llimplementation.h"

int main()
{
	Stack SL;

	init(&SL);
	push(&SL, 5);
	push(&SL, 3);
	push(&SL, 4);
	push(&SL, 1);
	push(&SL, 7);
	push(&SL, 9);
	display(SL);

	pop(&SL);
	pop(&SL);
	display(SL);
	bool empty = isempty(SL);
	printf("\nIs it empty? %s", empty ? "Yes" : "No");
	bool full = isfull(SL);
	printf("\nIs it full? %s", full ? "Yes" : "No");

	// makeNULL(&SL);
	// display(SL);
}
