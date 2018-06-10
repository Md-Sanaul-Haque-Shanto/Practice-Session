#include<iostream>
using namespace std;
int main()
{
int n,h;
cin>>n>>h;

long long ans=0;
for(int i=0; i<n; i++)
{
int o;
cin>>o;

if(o>h) ans+=2;
else ans++;
}
cout<<ans<<endl;
return 0;

}
