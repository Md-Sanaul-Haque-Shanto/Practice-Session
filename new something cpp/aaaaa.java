#include<stdio.h>

using namespace std;

int main()
{
int t;cin>>t;
for(int i=1;i<=t;i++)
{
long long bahu,single_kon,x;cin>>x;
double kon;
if(x%180!=0)printf("Case %d: Impossible\n",i);
else
{
bahu=(x/180)+2;
kon=(x*1.0)/(bahu*1.0);
single_kon=(ceil(kon)-kon<=kon-floor(kon))?ceil(kon):floor(kon);
printf("Case %d: ",i),cout< }
}
}
