#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int Interval(float x, float A, float B);
int Interval(float x, float A, float B)
{
    if ((x > A)&&(x < B))
    {
        printf("The number %6.2f is in the interval (%6.2f, %6.2f)\n",x,A,B);
        return 1;
    }
    else
    {
        printf("The number %6.2f isn't in interval (%6.2f, %6.2f)\n",x,A,B);
        return 0;
    }
}
int main()
{   float x, A, B;
    printf("X:");
    scanf("%f", &x);
    printf("\n");
    printf("A:");
    scanf("%f", &A);
    printf("\n");
    printf("B:");
    scanf("%f", &B);
    printf("\n");
    Interval(x,A,B);
    getch();
    return 0;
}
