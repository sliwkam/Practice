#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/* Program checks that the entered numbers can construct a triangle */
int main()
{
    float a, b, c, s, p;
    printf("Side a= ");
    scanf("%f", &a);
    printf("Side b= ");
    scanf("%f", &b);
    printf("Side c= ");
    scanf("%f", &c);
    if ((a>=b+c) || (b>=a+c) || (c>=b+a))
    {
        printf("This triangle doesn't exist.");
        return;
    }
    s=(a + b + c)/2;
    p=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Field of this triangle is: %f\n", p);



    getch();
    return 0;
}
