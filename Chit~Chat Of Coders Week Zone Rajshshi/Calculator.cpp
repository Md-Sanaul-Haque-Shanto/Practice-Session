#include<iostream>
#include<string>
using namespace std;

int main()
{
int a,b;
string s;
cin>>a>>s>> b;
if(s=="+")
cout<<a+b<<endl;
else if(s=="-")
cout<<a-b<<endl;
else if(s=="*")
cout<<a*b<<endl;
else if(s=="/")
cout<<(double)a/b<<endl;

return 0;
}
