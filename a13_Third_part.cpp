#include <iostream>
#include <conio.h>
/* the program checks that the entered points are included in third part of the 
coordinate system. */
using namespace std;
int third(int x, int y);
int third(int x, int y)
{
    if (x<0 && y<0)
    {
    cout << "Point  is in third part.\n";
    return 0;
    }
    else
    {
     cout << "Point  isn't in third part.\n";
     return 1;
    }

}
int main()
{   int n, x, y, i, result;
    i = 1;
    cout << "Enter numbers of points." << endl;
    cin >> n;
    do
    {
        cout << "Enter the X coordinate of the " << i << " point\n";
        cin >> x;
        cout << "Enter the Y coordinate of the " << i << " point\n";
        cin >> y;
        third(x,y);
        i++;
    }while(i<=n);
    getch();
    return 0;
}
