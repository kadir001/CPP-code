
 

#include <iostream> 
#include <string>
#include <bitset>

using namespace std;
 int main () { 
 	
char input[12];
 	
 bitset<11> foo (std::string("11100110101")); 
 
 cout << foo.flip(); 
 
  return 0; }