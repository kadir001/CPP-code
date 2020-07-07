#include <iostream> 
#include <string>
 #include <algorithm> 
 #include <cctype> 
 using namespace std; 
 void transform_if_first_of_word( char& c ) {
 	
 
  if( (*(&c - sizeof(char))) == ' ') c = toupper( c ); 
 	}
 	int main() { 
 		string str[1000]; 
 		cin.getline(str,1000);
 		str[ 0 ] = toupper( str[ 0 ]); 
 		for_each( str.begin()+1, str.end(), transform_if_first_of_word ); 
 		cout << str;
 return 0; }