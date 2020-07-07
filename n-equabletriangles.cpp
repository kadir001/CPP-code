#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
float side1;
float side2;
float side3;
float area;
float s;
float sum;
int n;
cin >> n;
cin >> side1 >> side2 >> side3;
sum = side1 + side2 + side3;
s = sum / 2;
area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
if (sum == area)
cout << "True\n";
else
cout << "False\n";
return 0;
}