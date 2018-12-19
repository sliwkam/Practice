#include <stdio.h>
#include <stdlib.h>
/* Program checks how many numbers belonging to the interval */
int main()
{
    printf("Enter your 4 numbers.\n");
    int x[4];
    int i=0;
    int suma = 0;
    for (i=0;i<4;i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\n");
    for (i=0;i<4;i++)
    {
        if ((x[i]> 0)&&(x[i]<100))
        {
            suma = suma + 1;
        }
    }
    printf("The number of numbers belonging to the interval:%d", suma);
    return 0;
}
