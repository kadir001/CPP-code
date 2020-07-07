#include <iostream> 


using namespace std; 

int main() { int arr[20],i,n,sum=0;

  cin >> n; 
  for(i=0;i<n;i++) {
  	 cin >>arr[i]; } 
  	 
  	  for(i=0;i<n;i++) { 
  	  	sum=sum+arr[i]; } 
  	 
  	  cout <<sum; 
}