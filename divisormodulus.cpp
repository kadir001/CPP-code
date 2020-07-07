#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	
 	int l, h, d, ans;
 	cin >> l;
 	cin >> h;
 	cin >> d;
 	 if (l >= 1 && l <= 1000){
  		cout << "error";
  	}else  if (h >= 1 && h <= 1000){
  		cout << "error";
  	}else  if (d >=1 && d <= 1000){
  		cout << "error";
  	}
  	
 	ans = h/d;
 	if (l==ans){
 		cout << ans;
 	}
 	
 	return 0;
 }