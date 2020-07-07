#include <iostream>
 using namespace std;
  int main() { int i, n;
   float arr[5]; 

   cin >> n;
    cout << endl;
  for(i = 0; i < n; ++i) 
  { cout << i + 1 << " ";
   cin >> arr[i]; }
   for(i = 1;i < n; ++i) {
   	 if(arr[0] < arr[i]) 
   	 arr[0] = arr[i]; } 
   	 cout << arr[0]; return 0; }



