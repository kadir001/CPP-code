#include <iostream>


using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 
 {
 	int a, b;
 	int sum = 0;
 	
 cin >> a >> b;
if ( a == 11 && a==b){
	sum = 2;
}
 	if ((a + b)>21 && a == 11){
 		 a = 1;
 		 sum = a + b;
 	}
 	
 	else if ((a + b)>21 && b == 11){
 		 b = 1;
 		 sum = a + b;
 	} 
 	
 	
 	 
 		if((a + b)<=21 && a == 11) {
 		a=1;
 		sum = a + b;
 	} 
 		
 	if((a + b)<=21 && b == 11) {
 		b=1;
 		sum = a + b;
 	} 
 cout << sum;
 }