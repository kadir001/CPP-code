#include <iostream>
 using namespace std; 
 int main () {


double a=0, b=0, c=0;
int gemiddelde;
cin >> a;
cin >> b; 
cin >> c;

gemiddelde = ( a + b + c ) / 3;


 	if (gemiddelde > 90 && gemiddelde <=100){
 	cout << "A" << endl;
 	 
 	}else if (gemiddelde > 80 && gemiddelde <=90){
 	cout << "B" << endl;
 	
 	  
     }else if (gemiddelde > 70 && gemiddelde <= 80){
     	
     
 	cout << "C" << endl;
 	
 	} else  if (gemiddelde > 60 && gemiddelde <=70){
 	cout << "D" << endl;
 	 
 	}else if (gemiddelde <= 60){
 		cout << "F" << endl;
 
 	}else if (gemiddelde > 100){ 
 	
 	cout << "error";
 
 	
 	 
 	   };
return 0; }