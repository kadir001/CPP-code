#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	
 	int Ax, Ay, Bx, By, e, f;
 	cin >> Ax >> Ay >> Bx >> By;
 	e = Ax * Ax + Ay * Ay;
 	f = Bx * Bx + By * By;
 	if (e < f){
 		cout << "A";
 	}
 	else 
 	cout << "B";
 	return 0;
 }