#include<bits/stdc++.h>
using namespace std;
int main()
{
int c1=0,p1=0,p2=0;
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{
if(s[i]=='A')
{
c1++;
p1++;

}
else {
if(c1>0)
c1--;
p1++;
}
}
if(c1==0&&p1==p2) puts("Sim");

else puts("Nao");



return 0;
}
