#include <iostream>
 using std::cin;
 using std::cout; 
 using std::endl; 
 
 int gcd(int a, int b) {
 	 return b == 0 ? a : gcd(b, a % b); }
 	 
 	  int main() { 
 	  
 	  int n1, n2;
 	   
 	    cin >> n1; 
 	    cin >> n2;
 	      cout << gcd(abs(n1), abs(n2)) << endl;
 }