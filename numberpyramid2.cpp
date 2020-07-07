#include <iostream> 
using namespace std; 
int main() { 
	int n, coef = 1; 
	 cin >> n; 
	 for(int i = 0; i < n; i++) {
	 	 cout <<" ";	 	 
	 	  for(int j = 0; j <= i; j++) { 
	 	  	 if (j == 0|| i == 1) coef = 1; 
	 	  else
coef = coef*(i-j+1)/j; 
cout <<coef << " "; } 
cout << endl; } 
return 0; }
