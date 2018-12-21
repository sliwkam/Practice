#include <iostream>
#include <conio.h>
#include <math.h>
/* the program calculates the value of the logarithm from the number two */
using namespace std;

int main()
{
    float suma, znak;
    int i;
    znak = -1;
    suma = 0;
    i = 1;
    while (i < 100)
    {
        znak = -znak;
        suma = suma + znak * 1/i;
        i = i + 1;
    };
    cout << "LN(2)=" << suma << "   Dokladnie=" << log(2.0);
    getch();
    return 0;
}

