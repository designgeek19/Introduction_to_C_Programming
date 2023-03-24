#include <stdio.h>

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main()
{
	int length, width, area;

	printf("Enter the length  and width of the object: ");
	scanf("%d %d", &length, &width);
	printf("You entered: %d and %d", length, width);
	{
		area = length * width;
	}
	printf("\nArea of shape = %d\n", area);

	return 0;
}                   
