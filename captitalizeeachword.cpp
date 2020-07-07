#include <iostream> 
#include <string>
 #include <algorithm> 
 #include <cctype> 
 using namespace std; 
 void transform_if_first_of_word( char& c ) {
 	
 
  if( (*(&c - sizeof(char))) == ' ') c = toupper( c ); 
 	}
 	int main() { 
 		std::string str[1000]; 
 		std::cin >> str;
 		str[ 0 ] = toupper( str[ 0 ]); 
 		std::for_each( str.begin()+1, str.end(), transform_if_first_of_word ); 
 		std::cout << str;
 return 0; }