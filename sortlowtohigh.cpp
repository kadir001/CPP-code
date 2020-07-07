#include<iostream>

using namespace std;

int main() {
	 int i,a[10],temp,j,v; 
	 cin >> v;
	  for(i=0;i<=v;i++) { 
	  
	  	
	  	cin >> a[i]; 
	  	} 
	  for(j=0;j<10;j++) 
	  		 
	  		 for(i=0;i<=10;i++) { 
	  		 	for(j=0;j<=10-i;j++) {
	  		 		 if(a[j]>a[j+1]) { 
	  		 		 	temp=a[j]; 
	  		 		 	a[j]=a[j+1]; 
	  		 		 	a[j+1]=temp; } } } 
	 for(j=0;j<10;j++) { 
	cout <<a[j]; } }