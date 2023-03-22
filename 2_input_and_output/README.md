## Learning about input and output in C
#
# 1. Standard Input/Output
# 2. getchar()/putchar() Functions
# 3. Using printf() and scanf() to format Input/Output
#
## Standard Input/Output (I/O)

# The C language has no special synthax for I/O, instead, C uses functions to interract with files.
#
# 1. getchar() - Is used to read input from the standard input.
# It can be written as int getchar(void);
# if you run the getchar() finction, your program would read its input directly from what you type in the command line. getchar() reads whatever you type after calling the function
# the getchar() returns EOF at the end of the file or when an error is encountered.
#
# 2. putchar() - Is used to write standard output
# For example, it can be written as: "int putchar(int c);"
# it converts the character 'c' to an unsigned char and writes it on the standard output
# putchar(); basically returns the character that was written.
#
# Formatted Output:
#
# printf() displays formatted output to stdout (standard output)
# The synthax can be written as:
# printf(format_str, arg1, arg2, ...);
# * arguments are the variables to be printed
# * format_str (format string) tells printf() how to display these arguments
#
# Example: printf("who:%s size:%d cost:%5.2f","you",12,1.2);
# this code is divided into two sections (format string & argument string or variables) separated with a coma; everything inside the format string is inside the " ". While each of the variables are separated with a coma.
# the %s, %d and %5.2f are control strings inside the format string. What this means is that the variables on the right re going to be substituted inside the format string on the left.
# e.g. 
# * the format string "%s" would be substituted with "you"
# * %d would be substituted with "12"
# * %5.2f would be substituted with 1.2
# ** %s means "string"
# ** %d means "digit" or "integer"
# ** %5.2f means a floating point of 5 digits with 2 decimal places
# So the actual output would look like this:
# * who: you size:12 cost:1.20
#
# Formatted Input:
#
# scanf() reads formatted input from standard input
# the synthax can be written as:
# scanf(format_str, &arg1, &arg2, ...);
# the &arg are not variables themselves but the addresses of the variables that will store the values. So whenever you are using scanf();, always put the "&" symbol in front of the variable name.
# format_str tells scanf() how the input is formatted.
#
# Example: 
# Input data: y 101
#	char c;
#	int i;
#	scanf("%c %d",&c,&i);
# In the output:
# the %c would be replaced with the "y" character, while the %d would be replaced with the "101" integer/digit. Then those values would be printed into the variables with the address "&c" and "&i"
