#include<iostream> 
using namespace std;
 int main() { 	
 	int Arr[100],n,temp,i,j; 	

 		cin>>n; 	
 		for(i=0;i<n;i++) 	{ 	
 	
 					cin>>Arr[i]; 	} 	
 					for(i=0,j=n-1;i<n/2;i++,j--) 	
 					{ 		temp=Arr[i]; 	
 						Arr[i]=Arr[j]; 	
 							Arr[j]=temp; 	} 	
 			
 							for(i=0;i<n;i++) 		cout<<Arr[i]<<" "; 	
return 0; }