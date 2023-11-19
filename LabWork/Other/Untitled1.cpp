#include<iostream>
#include<math.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
int n;
double x, y;
int h;
for(n=0; n<5; n++)
{
cout << "\n| x | y |";
cout << "\n|---------|---------|";
for (x = 0; x < 4; x += 0.35)
{
if (x < 2)
y = 0 + sqrt(4 - (x - 2));
else if (x < 4)
y = 2 * x - 6;
cout << "\n|" << setw(7) << x + n * 4 << setprecision(2) << setw(9) << y << "|";
h = (y + 1) * 10;
if ((y + 1) * 10 - h > 0.5) h++;
for (; h > 0; h--) cout << " ";
cout << "*";
}
cout << "\n Activati tasta Enter...";
getchar();
}

return 0;
}