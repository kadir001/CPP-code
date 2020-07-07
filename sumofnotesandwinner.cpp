#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	int a, b, c, d, e, f, g, h;
 	cin >> a >> b >> c;
 	cin >> d >> e >> f;
 	g = a + b + c;
 	h = d + e + f;
 	if (g - h >= 0){cout << "Garry" << " "<< g - h;}
 	if (h - g >=0){cout << "Sharry" << " "<< h - g;}
 	if (h - g == 0){cout << "None"<< " " << "0";}
 
 	
 	
 	return 0;
 }