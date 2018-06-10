#include<bits/stdc++.h>

using namespace std;
int main()
{
int n,k,t,g,ans,m;
string s;
cin>>n>>k;
cin>>s;
for(int i=0;i<n;i++)
{
if(s[i]=='T') t=i;
else if(s[i]=='G') g=i;
}
if(g<t)
{
for(int i=g;i<=t;)
{
i=i+k;
if(s[i]=='T')
{
ans=1;
break;
}
else if(s[i]=='#'|| i>t)
{
ans=0;
break;
}
}
}
else {

for(int i=g;i>=t;)
{
i=i-k;
if(s[i]='T')
{
ans=1;
m=i;
break;
}
else if(s[i]=='#'||i<t)
{
ans=0;
break;
}
i=i-k;
}
}
if(ans==1)
cout<<"YES\n";

else
cout<<"NO\n";
return 0;

}
