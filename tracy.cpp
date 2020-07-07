#include <iostream> 

using namespace std;

int main() 
{  

	int a;
	int b;
	cin >> a;
	cin >> b;
	if (( a + b ) > 10){
	
	cout << "Hate";}
		
	else if ((b + a)<1){
		
	cout << "Hate";}
		
	else if ((a + b)==6){
		
	cout << "Love";}
	
	else if ((b - a)==6){
			
	cout << "Love";}
	
	else if ((a - b)==6){
		
	cout << "Love";}
	

	return 0;
}