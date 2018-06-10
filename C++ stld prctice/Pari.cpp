/*Bismillah Hir Rahmanir Rahim */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
  unsigned int t,n,a,b,c,i,ans=0,x=0,z=0;
   cin>>t;
   for(i=0;i<t;i++){

    cin>>a;
z+=a;
   }
   for(i=0;i<t-1;i++){
cin>>b>>c;
x=b^c;
ans+=x;
   }
n=ans+z;

cout<<n<<endl;


}
