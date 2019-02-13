/* The program performs calculations based on points in the coordinate system.
   The program uses pointers to send data to functions */


#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;

/* The function counts how many points are in the first part of the coordinates system and next shows average value of points' coordinates.  */
float average(int *d, int *s, int n)
{
  int i, count = 0, sum = 0;
  float aver;
  for (i = 0; i < n; i++) {
	  if (((*(d+i)>=0)&&(*(d+i)<=90))&&((*(s+i)>=0)&&(*(s+i)<=90))) {
			count++;
			sum = sum + *(d+i) + *(s+i);
	  }
  }
  aver = sum / count;
  return aver;
}

/* The function shows the maximum distance from the beginning of the coordinates system. */
float maximum(int *d, int *s, int n)
{
	float distance = 0, max = 0;
	int i, di, si;
	for (i = 0; i < n; i++) {
		di = *(d+i);
		si = *(s+i);
		distance = sqrt(di*di+si*si);
		if (distance > max) {
			max = distance;
		}
	}
	return max;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n, xx, yy, x[50], y[50], i;
	cout << "Enter the number of points: ";
	cin >> n;
	cout <<  "Enter the coordinates of the points.";
	for (i = 0; i < n; i++) {
		 cout << "The X-coordinate of " << i + 1 << " point: ";
		 cin >> xx;
		 cout << "The Y-coordinate of " << i + 1<< " point: ";
		 cin >> yy;
		 x[i] = xx;
		 y[i] = yy;
	}
	cout << "nr.   X   Y" << endl;
	for (i = 0; i < n; i++)
	{
	  cout << i + 1 << "     " << x[i] << "   " << y[i] << endl;
	}
	cout << "Average coordinates of points belonging to the first quadrant of the coordinate system: " << average(x, y, n) << endl;
	cout << "The maximum distance of the point from the beginning of the coordinate system: " << maximum(x, y, n) << endl;
	getch();
	return 0;
}
