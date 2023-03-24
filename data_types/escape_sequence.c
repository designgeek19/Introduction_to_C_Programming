#include <stdio.h>

int main() {

int i = 2, j = 3;

	printf("\n1. To learn how to use tab on a line of text, press 2\n");
	scanf("%d", &i);
	printf("Tip = Tab:\tUse backslash and t to add tab on a line of text\n");
	printf("\n2. To learn how to create a new line, press 3\n");
	scanf("%d", &j);
	printf("Tip = New line: To create a new line, enter the backslash and letter n\n\n");
	printf("\nThat would be all for now, see you next time\n");

	return 0;
}
