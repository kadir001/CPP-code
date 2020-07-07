
#include <iostream> 
#include <string> 
using namespace std; 
int main () 
{ 
	string str;
	cin >> str; 
	while ( cin >> str ) { 	
		cout << endl; 	
	 
		 	} 
return 0; }

int bin2dec(char* str) { int n = 0; int size = strlen(str) - 1; int count = 0; while ( *str != '\0' ) { if ( *str == '1' ) n = n + pow(2, size - count ); count++; str++; } return n; } int main() { char* bin_str = "1100100"; cout << bin2dec(bin_str) << endl; }