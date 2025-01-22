#include <stdio.h>

int main()
{
/* A variable is what we call a name space, basically
a certain portion of the computer memory is reserved and is used throughout the program
it can be modified or freed.

now a variable is preceded by a datatype, which specifies the type of data
the variable is supposed to hold, also it ensures the amount of space to be occupied like

WHOLE NUMBERS : int --> 4 bytes
DECIMAL NUMBERS (SINGLE PRECISION): float --> 4 bytes
DECIMAL NUMBERS (DOUBLE PRECISION): double--> 8 bytes
CHARACTERS :  char --> 1 byte
*/

int a; // this is called declaration, the variable does not currently hold any value
a=10; // this phase is called initialization, where we assign a value and it is stored in the respective memory space

float f = 4.2;
double d = 1.69;
char c = 'a';

printf("%d\n",a);
printf("%f\n",f);
printf("%f\n",d);
printf("%d\n",c);

/*
NOTICE : using printf to print the variables is a bit different that just printing plain text,
in this case we are passing the "type specifier" {%d, %f, %c} each of them are to make the printf recognize which
particular data type is to be printed.
suppose printf finds "%d" it would  check the parameter list for the upcoming integer value and print it

in case there are multiple type specifiers it would  do it in first come first serve basic
*/

printf("%d %f %c\n", a,d,c); 
/*this implementation expects that the second parameter (a) would be an integer, the third parameter (d) would be a floating point
and the fourth (c) parameter would be a character*/

return 0;
}
