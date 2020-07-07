#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	
 	int m, n, p; 
 	cin >> m >> n >> p;
 	
 	if (m < n && m < p && n < p){
 	cout << m <<" "<< n << " " << p;}
 	
 	else if (m < n && m < p && n > p){
 	cout << m <<" "<< p << " " << n;}
 	
 	if (n < m && n < p && m < p){
 	cout << n<<" "<< m << " " << p;}
 	
 	else if (n < m && n < p && m > p){
 	cout << n <<" "<< p << " " << m;}
 	
 	if (p < n && p < m && n < m){
 	cout << p <<" "<< n << " " << m;}
 	
 	else if (p < n && p < p && n > m){
 	cout << p <<" "<< m << " " << n;}
 	
 	
 	return 0;
 }