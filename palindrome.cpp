#include<iostream> 
using namespace std; 
int main( ) { char str[80]; 
cin.getline(str, 80); 	
 int l; //Hold length of string //finding length of string 
 for(l = 0; str[l] != '\0'; l++); //Comparing first element with last element till middle of string 
 int i; for(i = 0; (i < l/2) && (str[i] == str[l - i - 1]); i++);
  if(i == l/2) 
  cout << "Yes"; else cout << "No"; 	
 return 0; }