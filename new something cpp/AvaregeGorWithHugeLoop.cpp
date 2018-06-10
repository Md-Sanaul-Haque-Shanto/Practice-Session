#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{

int n;
cin>>n;
int arr[n];
double s = accumulate(arr,arr+n,0)/n;
cout<<s;
}
return 0;
}
