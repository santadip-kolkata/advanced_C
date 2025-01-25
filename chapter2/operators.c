#include <stdio.h>

int main()
{
/*
now we learned about data types, but
what do we do with data? we perform various operations on them
they maybe comparisons, mathematical operations,etc 

the entities which help us perform those operations are called operators
and the entities on which these operations are performed are called, "operands"

for example, in a+b
-> a,b are the operands 
and + is the operator
now c has various categories of operators....

ARITHMATIC OPERATORS (+,-,*,/,% , () )
LOGICAL OPERATORS (||, &&, !)
ASSIGNMENT OPERATORS (=,+=,-=,*=,/=,%=)
BITWISE OPERATORS (|, &, ~, ^)
UNARY OPERATORS (++,--)
*/
int a = 11, b=2;
// + OPERATOR -> performs addition of two operands and returns the result
int sum = a+b;
printf("sum: %d\n",sum);

int difference = a-b;
printf("difference: %d\n",difference);

int multiply = a*b;
printf("Multiply: %d\n",multiply);

int divide = a/b;
printf("Division: %d\n",divide);

int remainder = a%b;
printf("Remainder: %d\n",remainder);

/*
notice the the / operator returns the quotient
while the % operator returns the remainder
*/

return 0;
}
