#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b;
string s;
cin>>a>>b>>s;
if(s=="+")
cout<<a+b<<endl;
else if(s=="-")
cout<<a-b<<endl;
else if(s=="*")
cout<<a*b<<endl;
else if(s=="/")
cout<<a/b<<endl;
else if(s=="%")
cout<<a%b<<endl;

}
return 0;
}
