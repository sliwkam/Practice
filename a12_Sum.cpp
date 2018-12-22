#include <iostream>
#include <conio.h>

using namespace std;
float suma(int k);
float suma(int k)
{
    int i;
    float a, sum;
    sum = 0;
    i = 1;
    do
    {
        if ((i%2)==0)
        {
            a = (2*(i+1)*(i+2))/(3*i);
            sum = sum + a;
        }
        i++;
    }while (i<=k);
    return sum;
}
int main()
{
    int k, i;
    float a;
    cout << "Enter K number:\n";
    cin >> k;
    for (i=1; i <= k;i++)
    {
        a = (2*(i+1)*(i+2))/(3*i);
        cout << a << endl;

    }
    cout << "Sum of the elements=" << suma(k);
    getch();
    return 0;
}
