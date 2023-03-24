#include <stdio.h>

// a variable number of values from the users
// Then calculate the average of the numbers in float

int main(void)
{

	int i, numOfNums = 0, total = 0, numsRead, value;
	float average;

	printf("Type the numbers you want to calculate (separated with spaces) \n");
	numsRead =scanf("%d",&value); 

	while(numsRead > 0) { 
		numOfNums++;
		(i=0, i<numOfNums, i++);
		total += value;		// total = total + value
		printf("You entered %d\n",value);
		numsRead = scanf("%d", &value);
	}

	average = (float)total / (float)numOfNums;
	printf("You typed %d values. \n Average = %f.\n",numOfNums, average);

	return (0);
}	
//
//Comments
//int i, numOfNums = 0, total = 0, numsRead, value;
//        float average; 			= variable declarations
//
// printf("Type the numbers you want to calculate (separated with spaces) \n");
//
//scanf("%d", &numOfNums); = reads the number inputed by the user and assign it to numOfNums
//
//  while(numsRead > 0) = while the user inputs a number
//
//   numOfNums++; = increase the value of numOfNums by 1
//
//  (i=0, i<numOfNums, i++); = loop condition: from the beginning, i is initialized to 0, if i is less than numOfNums and the user enters a value, then increament i by 1
//
//note* = i is thee current number of values the user has typed and numOfNums is the total number of values the user typed at the end
//
//scanf("%d", &value); = the program would read the new value entered by the user
//
// total += value; = the program adds the new value to the total of all the values entered so far
//
//numsRead = scanf("%d", &value); recieve every value the user enters from the standard input.
//  printf("You entered %d\n",value); = the program prints out a message confirming to the user the number they just entered
//
//   average = (float)total / (float)numOfNums; = the program calculates the average of all the numbers entered by the user
//
//    printf("You typed %d values. Average = %f.\n",numOfNums, average); = the program displays the number of values entered by the user and the average of the values.
//
//    Note* after the user entera all the values on the standard input and receives a prompt confirming all the entries, the user has to tap "Ctrl + d" on their keyboard to signify "end of file (EOF)" and get the results.
