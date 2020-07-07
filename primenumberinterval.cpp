#include <iostream> 
using namespace std; 
int main() { 
	int m, n, i, flag;
	cin >> m >> n; 
	while (m < n) { flag = 0; 
	for(i = 2; i <= m/2; ++i) {
		 if(m % i == 0) { flag = 1; 
		 break; } }
		  if (flag == 0 && m!=1)   
  			 cout << m << endl; 
	++m;} 
return 0; }