#include <iostream>
#include <stdlib.h>


using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 
 {
 	int a=0;
 	int b=0;
 	srand (time(NULL));

a = rand() % 13 + 1;
b = rand() % 13 + 1;
 	if (a==11){
 		a=1
 	;}
 	b=0;
 	if (b==11){
 		b=1
 	;}
 	cout << a + b;
 }