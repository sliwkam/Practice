#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* The program calculates the result of function  */
int main()
{
    float x, y;
    printf("Enter your chosen number:\n");
    scanf("%f", &x);
    if (x<=-2)
    {
        y = x + 2;
    }
    else if ( (x > -2)&& (x < 0) )
    {
        y = (x - 2)*(x - 2);
    }
    else
    {
        y = 4 - x*x;
    }
    printf("Result of calculations=%f\n",y);
}
