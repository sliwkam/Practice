#include <iostream>
#include <math.h>
#include <conio.h>
/* the program calculates the value of the exponential function */
using namespace std;
float fexp(float x, float eps);

int main()
{
	float x, eps;
	cout << "Wprowadz X:\n";
	cin >> x;
	cout << "Wprowadz przyblizenie EPS:\n";
	cin >> eps;
	cout << "Wyznaczono= " << fexp(x, eps) << "  Dokladnie=" << exp(x);
	getch();
	return 0;
}
float fexp(float x, float eps)
{   int i;
	i = 1;
	float wyraz, suma;
	wyraz = 1;
	suma=1;
	do
	 {

		 wyraz = wyraz * x / i;
		 i++;
		 suma=suma+wyraz;
	 } while (wyraz > eps);
	 return suma;

}

