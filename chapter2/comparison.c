#include <stdio.h>

int main()
{
    /*
        often we need to compare between two values,
        for that purpose we have the conditional operators
        where we can check the condition between two operands
    */
   int a=6;
   int b=4;
   int c=6;

// equality operator "=="
    
    printf("\nEQUALITY OPERATOR\n");
    printf("a==b is : %d\n",a==b); //checks if a (6) is equal to b (4)
    printf("a==c is: %d\n",a==c); // checks if a(6)  is equal to c (6)
    /*
    NOTICE that if the condition is evaluated to be true the operator returns a non-zero value
    if it is false it returns 0
    */
// inequality operator "!=" -> returns non zero value if two operands are not equal; and zero if they are equal 
    printf("\nINEQUALITY OPERATOR\n");
    printf("a != b: %d\n",a!=b); //TRUE
    printf("a != c: %d\n",a!=c); //FALSE

// Greater than operators ">" -> returns non zero if the LHS is greater than the RHS
     printf("\nGREATER THAN OPERATOR\n");
    printf("a >= b: %d\n",a>b); //TRUE
    printf("a >= c: %d\n",a>c); //FALSE


// SEARCH FOR THE OTHER OPERATORS GREATER THAT EQUALTO , LESS THAN EQUAL TO ETC

    return 0;
}