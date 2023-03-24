#include <stdio.h>

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main() 
{
	float length, width, area;  

	printf("Enter the length  and width of the object: ");
	scanf("%f %f", &length, &width);
	printf("You entered: %f and %f", length, width);
	{
		area = length * width;
	}
	printf("area of shape = %f\n", area);

	return 0;
}
