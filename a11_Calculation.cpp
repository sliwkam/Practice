#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;
float norway(float a, float eps);
float norway(float a, float eps)
{
    float xn, x;
    xn = 1;
    do
    {
        x = xn;
        xn = 0.5 * (x + a/x);

    } while (fabs((xn-x)>eps));
    return xn;
}
int main()
{
    float a, eps;
    cout << "Enter A.";
    cin >> a;
    cout << "Enter eps";
    cin >> eps;
    cout << "Calculations=" << norway(a, eps) << endl << "Precisely=" <<  sqrt(a);
    getch();
    return 0;
}
