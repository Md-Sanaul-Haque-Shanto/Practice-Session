#include<iostream>

using namespace std;

int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
int a,b,s,m;
cin>>a>>b>>s;

cout<<"Case "<<i<<": ";

m=a+b+s;

if(m>=180)
{
cout<<"yes"<<endl;;
}
else
{
cout<<"no"<<endl;
}
}

return 0;

}
