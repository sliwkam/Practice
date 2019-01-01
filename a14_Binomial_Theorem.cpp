#include <iostream>
#include <conio.h>
using namespace std;
int silnia(int n);
int newton(int n, int k);
int silnia(int n)
{
    int res, i;
    for (i=0;i <= n; i++)
    {
    if (i==0)
    {
        res = 1;
    }
    else
    {
        res = i * silnia(i-1);
    }
    }
    return res;

}
int newton(int n, int k)
{
    int suma;
    suma = silnia(n)/(silnia(k)*silnia(n-k));
    return suma;
}

int main()
{   int n, k;
    cout << "Enter n number\n" ;
    cin >> n;
    cout << "Enter k number\n";
    cin >> k;
    cout << "Newton= " << newton(n,k);
    getch();
    return 0;
}
