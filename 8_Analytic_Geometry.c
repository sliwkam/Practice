#include <stdlib.h>
#include <conio.h>
#include <math.h>
/* The program checks that the entered point  is contained in the circle */
float Wheel(float xs, float ys, float x, float y, float r);
float Wheel(float xs, float ys, float x, float y, float r)
{
    float length;
    length = sqrt(pow((xs-x),2)+pow((ys-y),2));
    if (length > r)
    {
        printf("Point isn't in circle.");
        return 1;
    }
    else
    {
        printf("Point is in circle.");
        return 0;
    }


}

int main()
{
    float xs, ys, x, y, r;
    printf("Enter radius ");
    scanf("%f", &r);
    printf("Enter XS ");
    scanf("%f", &xs);
    printf("Enter YS ");
    scanf("%f", &ys);
    printf("Enter X ");
    scanf("%f", &x);
    printf("Enter Y ");
    scanf("%f", &y);
    Wheel(xs,ys,x,y,r);
    getch();
    return 0;
}
