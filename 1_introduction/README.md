Introduction to C

/**1. The header file:
#include <stdio.h>

int main(void)
{
        printf("Hello World!\n");
        return 0;
}

* Header files begin with #include <stdio.h>
* This defines all the input and output routines that your code/program is going to use

* int main(void) is an entry point of our program that returns an int as initial value. It takes in an argument in the parentheses (void) means that there are no arguments to the current program. Main is where the runtime of the program is going to start executing.

* { } curly braces are blocks that hold our code

* printf statement prints out whatever you tell it to into a standard output

* ("Hello World!); is a string value we want the printf to print out in the standard output

* \n is an escape character that means "start new line"

* return 0; means that the program should return the integer 0 to whomever calls it

**/

/** 2. How to name Variables or identifiers:

* Variables or identifiers must begin with a letter or an underscore (not a number or special character)'

* It can then be followed by any combination of characters (letters, digits or underscore)' but no spaces inbetween words.
* You cannot use a reserved word (word that is used or defined in the syntax of the language

* Examples of valid variable names or identifiers:
** cnt
** _myBk
** go4it
** testCase
** _very_nice
* Note: Variable names are case sensitive

* Examples of variable names that are invalid:
** paul@document (@ is not allowed when naming variables);
** 3_times (Variable names must not begin with an integer);
** char (this is a reserved word in the programming language, it may create conflict when a variable is also named with a reserved word)';
** first name (spaces are not allowed inbetween words; use underscore instead);

**/

/** Data Types in C

# Intrinsic (Built in Data Types in C
# char (character);
** Typiclly 1 byte
** 'a', 'b', 'c', '2', '3', etc.

# int (integer);
** typically 4 bytes
** 16 (decimal); 020 (octal); 0x10 (hex);

# float (floating point);
** typically 4 bytes
** o.oo225, 2.25e-3

# double (extended precision float);
** typically 8 bytes
** unless told otherwise (e.g. 3.14f); floating point literals are assumed to be double.

**/

/** C Modifiers
* Modifiers are used to define how much space we want the variable to occupy in our system memory.
# e.g. long, long long, short, unsigned, signed.
** long, long long: are extended in some systems
** short: takes half space in some systems
** signed/unsigned: int or char

* variable sizes may vary by the compiler/machine
** sizes of integers or floating point numbers do vary by the compiler
** ANSI C defines the following rules:
1. short int should be <= int
2. int <= long int
3. float <= double
4. double <= long double

**/

/** Type Casting in C

# This is when the programmer specifically tells C to handle a particular variable as a particular type.
* e.g.
float f;
int i = 10;
f = (float) i; // assigned 10.0 to f
(This means that: the initial value of i is an integer 10,but if you assign that interger i to a floating point type (f = (float) i; that assigns a 10.0 to f)

f =3.14;
i = (int) f; // assigned 3 to i;
(similarly, floating point variable f is initially assigned the float value 3.14, you can reassign that value to an i (i = (int) f; the program is going to treat the value of f as an integer)

