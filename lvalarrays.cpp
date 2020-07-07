
#include <iostream>
 using namespace std;
  int main() { 
  int i, n;
   float age[100]; 
   cin >> n;
  for(i = 0; i < n; ++i) 
  {
   cin >> age[i]; }
   for(i = 1;i < n; ++i) {
   	 if(age[0] < age[i]) 
   	 age[0] = age[i]; } 
   	 cout << age[0]; return 0; }

