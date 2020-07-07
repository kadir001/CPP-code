#include<iostream>
using namespace std;
int maxRepeating(int* arr, int n, int k)
{for (int i = 0; i< n; i++)
arr[arr[i]%k] += k;
int max = arr[0], result = 0;
for (int i = 1; i < n; i++)
{if (arr[i] > max)
{max = arr[i];
result = i;
}}
return result;
}
int main()
{
int arr[100], x,v;
cin >> v;
for (x=0;x<v;x++)cin >> arr[x];
int n = sizeof(arr)/sizeof(arr[0]);
int k = 8;
cout << "The maximum repeating number is " <<
maxRepeating(arr, n, v) << endl;
return 0;
}
