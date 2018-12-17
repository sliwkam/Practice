#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Checking correlation between two numbers */
int main()
{
    float x,y;
   printf("Enter X number.\n");
   scanf("%f", &x);
   printf("Enter Y number.\n");
   scanf("%f", &y);
   if (x==y)
   {
       printf("X and Y are equal.");
   }
   if (x>y)
   {
       printf("X is bigger than Y.");
   }
   if (x<y)
   {
       printf("X is smaller than Y.");
   }
   getch();
   return 0;
}
