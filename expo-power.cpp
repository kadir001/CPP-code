#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n=0, fx=0, i=0;
cin >> n;
for(int i; i >= -1000; i++){
	if (i<n)
cout <<  pow ( 2, i) << ",";
else if (i==n) 
cout << pow(2, n);

}

return 0;}

    