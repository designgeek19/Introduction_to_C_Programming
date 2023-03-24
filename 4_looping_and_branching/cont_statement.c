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
		if(value < 0) {
			numsRead - scanf("%d",&value);
			continue;
		}
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
// if(value < 0) {
//       numsRead - scanf("%d",&value);
//       continue;
// }
// This part of the code is used to ignore any negative number entered by the user and continue the loop from the next value.
