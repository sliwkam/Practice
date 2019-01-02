#include <iostream>
#include <conio.h>

using namespace std;
/* The program creates second table including only positive numbers from entered table */
int main()
{
    int n, i, x, k, z;
    cout << "Enter the N number smaller than 100. ";
    cin >> n;
    k = 0;
    int tablica[n];
    cout << "Enter values\n";
    for (i=0;i<n;i++)
    {
        cin >> x;
        tablica[i] = x;
    }
    for (i=0;i<n;i++)
    {
        if (tablica[i]>0)
       {
           k = k + 1;
       }
    }
    z = 0;
    int tab[k];
    for (i=0; i<n; i++)
    {
        if (tablica[i]>0)
        {
               tab[z]= tablica[i];
               z++;
        }
    }
    cout <<endl <<  "Table with positive numbers" << endl;
    for (z=0;z<k;z++)
    {
        cout << tab[z]<< "|";
    }
    getch();
    return 0;
}
