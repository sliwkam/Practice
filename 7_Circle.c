#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* The program calculates field and circuit for the entered radius */
int main()
{
    float r, l, p;
    printf("Enter the radius of the circle.\n");
    scanf("%f", &r);
    p = (3.14 * r * r);
    l = (2 * 3.14 * r);
    printf("Field of the circle:%f\n", p);
    printf("Circuit of the circle:%f\n", l);
    getch();
    return 0;
}
