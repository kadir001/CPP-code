#include <iostream>
#include <iomanip>
using namespace std;
 

 int main()
 {
 double r;
cin >> r;
 float PI= 3.14;
 float area;
 	area = PI * r * r;
 	
 	if (r < 0 )
 	{
 		cout << "0";
 	}
 	else
 	cout << fixed << setprecision (2) << area;
 	return 0;
 }