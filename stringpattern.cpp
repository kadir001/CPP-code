#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int i,j,temp;

char str[80], substr1[10]={"111111"}, substr2[10]={"000000"};

 cin.getline(str, 80); 	
  

for(i=0; str[i]!='\0'; i++)
{
j=0;
if(str[i]==substr1[j] || substr2[j])
{
temp=i+1;
while(str[i]==substr1[j] || substr2[j] )
{
i++;
j++;
}
if(substr1[j]=='\0' || substr2[j]=='\0')
{
cout<<"Bad";
exit(0);
}
else
{
i=temp;
temp=0;}}}
if(temp==0)
cout<<"Good";
return 0;}

