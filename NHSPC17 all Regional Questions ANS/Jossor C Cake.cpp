#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,n,c=0;
cin>>a>>b>>n;
for(int i=0;i<n;i++){
    if(n-(a*i)<0)break;
    else if((n-a*i)%b==0) c++;
}
cout<<c<<endl;
}
