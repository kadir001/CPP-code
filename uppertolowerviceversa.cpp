
#include <iostream>
#include<stdio.h>
 #include<string> 
 
 using namespace std;
 int main(){ 
 	char str[20]; 
 	int i; 
 	cin >> str;
 	 for(i=0; i <=5; i++){ 
 	 	if(str[i]>=97 && str[i]<=122) 
 	 	str[i] = str[i]-32; 
 	 	else str[i] = str[i]+32; } 
 	 	cout << str;
 	 	 return 0; }

