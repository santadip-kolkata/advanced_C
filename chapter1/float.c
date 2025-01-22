#include <stdio.h>

int main()
{

/*
floating point numbers represent decimal numbers with single precision
they are represented by float
*/

float f = 3.2;
printf("%f\n",f);

/*
By default if returns upto 6 numbers, after the decimal point we can adjust that
by putting .(any number) before the %f
*/
printf("%.2f\n",f); //prints upto 2 decimal places
printf("%.3f\n",f); // prints upto 3 decinal places
return 0;
}
