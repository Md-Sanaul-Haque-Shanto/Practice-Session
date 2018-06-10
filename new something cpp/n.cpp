#include<iostream>
using namespace std;
int main()
{
    int t;
 cin>>t;
while(t--)
{
    int n,sum=0;
cin>>n;
for(int i=0;i<n;i++)
{
  int a;
  cin>>a;
  sum= sum+a;
}
 double Avg =sum/n;
 cout<<Avg<<endl;
}
  return 0;
}
