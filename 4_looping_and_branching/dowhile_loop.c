#include <stdio.h>

int main(void)
{
	int num = 10;
	do {
		printf("%d \n", num--);
	} while (num >= 0);

	printf("\n>>START CODING<<\n");

	return (0);
}
// Comments
// int num = 10; (the variable of num is initialized (assigned the value) of 10
// do { } (program statement to decreament the current value of num and print the new value on a new line)
// while (num >= 0); (condition, as long as the condition is true, the loop continues)
// printf("\n>>START CODING<<\n"); (final output, when the condition becomes false, stop the loop and print this on a new line)
