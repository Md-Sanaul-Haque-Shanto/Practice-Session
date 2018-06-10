#include<bits/stdc++.h>

using namespace std;

int main( int argc,char const *argv[])
{
string str;
cin>>ans;
for(int i=0;i<str.size();i++)
{
for(int j=i;j<str.size();j++)
{
string tmp=string(str.begin()+i,str.begin()+j+1);
ans.insert(tmp);
}
}
cout<<ans.size()<<endl;

return 0;
}
