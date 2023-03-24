#include <stdio.h>

// How to read a fixed number of values from the users
// Then calculate the average of the numbers in float

int main(void)
{

	int i, numOfNums = 0, total = 0, value;
	float average;

	printf("How many numbers do you want to type?");
	scanf("%d", &numOfNums);

	for(i=0; i<numOfNums; i++) {
		scanf("%d", &value);
		total += value;		// total = total + value
		printf("You entered %d\n",value);
	}

	average = (float)total / (float)numOfNums;
	printf("You typed %d values. \n Average = %f.\n",numOfNums, average);

	return (0);
}	
//
//Comments
//int i, numOfNums = 0, total = 0, value;
//        float average; 			= variable declarations
//
//printf("How many numbers do you want to type?"); = The first user prompt
//
//scanf("%d", &numOfNums); = reads the number inputed by the user and assign it to numOfNums
//
// for(i=0; i<numOfNums; i++) = loop condition: from the beginning, i is initialized to 0, if i is less than numOfNums and the user enters a value, then increament i by 1
//
//note* = i is thee current number of values the user has typed and numOfNums is the total number of values the user want to type
//
//scanf("%d", &value); = the program would read the new value entered by the user
//
// total += value; = the program adds the new value to the total of all the values entered so far
//
//  printf("You entered %d\n",value); = the program prints out a message confirming to the user the number they just entered
//
//   average = (float)total / (float)numOfNums; = the program calculates the average of all the numbers entered by the user
//
//    printf("You typed %d values. Average = %f.\n",numOfNums, average); = the program displays the number of values entered by the user and the average of the values.
