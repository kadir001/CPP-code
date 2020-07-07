#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
char inputString[100], leftHalf[100];
int length, mid, i;
cin >> inputString;
length = strlen(inputString);
mid = length/2;
for(i = 0; i < mid; i++) 
{leftHalf[i]= inputString[i];}
leftHalf[i] = '\0';
cout << leftHalf;
return 0;
}