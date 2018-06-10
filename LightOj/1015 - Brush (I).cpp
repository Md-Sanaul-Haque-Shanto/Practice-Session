#include <iostream>
#include<string>
using namespace std;



int main()
{
int n,k,m;
string s;
cin>>n;
cin>>s;
for(int i=1;i<=n;i++)
    m=s[i]++;
cout<<m;

return 0;
}
