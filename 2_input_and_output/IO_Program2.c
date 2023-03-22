#include <stdio.h>

int main(void)
{
	char f,m,l;
	int age;

	printf("Enter your initials, followed by your age: "); //Initial prompt for the user
	scanf("%c %c %c %d", &f, &m, &l, &age); //Reads whatever the user enters after the prompt (must be an integer/digit)
	printf("My full name initials are: %c%c%c and my age is %d.\n",f,m,l,age); //The final output
	return(0);
} 
// After the program is run
// The first printf statement prompts the user to enter their full name initials
// The scanf statement then reads the inputed character by the user
// Finally, the second printf statement prints the output to the user
