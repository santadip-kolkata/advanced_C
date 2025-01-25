#include <stdio.h>

int main()
{
/*
    Unary operators in c, ++ and -- they either increment or decrement a value by 1
    // pre increment ++a -> in this case the value is incremented first and then the operation is performed 
    // post increment a++ ->in this case the operations is performed first and then incremented
*/

    int a = 4;
    printf("%d\n",a++); //this line will print 4 and then a will be incremented by 1
    printf("%d\n",a); // this line will print 5 the newly incremented value of a
    printf("%d\n",++a); // this line will print 6 as the value will be incremented first and then the operation will be performed
}