#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* The program checks the divisibility of the number A by the number B */
int main()
{
    float a,b,c;
    printf("Enter A number.\n");
    scanf("%f", &a);
    printf("Enter B number.\n");
    scanf("%f", &b);
    c = a % b;
    if (c==0.0)
    {
        printf("A is divisible by B.");
    }
    else
    {
        printf("A is indivisible by B.");
    }
    getch();
    return 0;
}
