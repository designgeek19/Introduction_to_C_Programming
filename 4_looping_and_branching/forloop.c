#include <stdio.h>

// learning for loop
// countdown to BLAST OFF
int main(void)
{
int i;
	for(i=10; i>=1; i--); {
		printf("%d \n", i);
	}
	printf("\n>>ROUND 1, BEGIN<<\n");
return(0);
}
//
//Comments about the code
//
// i=10 (initialization: the value of "i" starts from 10)
//
// i>=1; i-- (condition: as long as the condition is TRUE and the current value of "i" is>=1, the loop will continue and "i" would continue to decreament it by 1.
//
// i-- (decreament statement, the current value of i should decrease by 1 and the program will check if the condition "i>=1" is false, if not, decreament and check again).
//
// printf("%d \n"); (print the final value of "i" in digits after the condition is met and the loop ends)
//
// printf("\n>>ROUND I, BEGIN\N") (add a new empty line, print the characters >>ROUND 1, BEGIN<< and add another new line)
