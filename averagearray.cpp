#include <iostream>
 using namespace std;
  int main() { int n, i; 
  long num[100], sum=0.0, average; 
  cin >> n; while (n > 100 || n <= 0) {
  	 cin >> n; } 
  	 for(i = 0; i < n; ++i) {
  	 //	 cout << i + 1 ; 
  	 	 cin >> num[i]; sum += num[i]; } average = sum / n; 
  	 	 cout << abs(average); 
return 0; }