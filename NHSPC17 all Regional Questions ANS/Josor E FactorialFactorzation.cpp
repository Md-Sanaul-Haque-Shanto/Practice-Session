
#include<bits/stdc++.h>
using namespace std;
int FF(int n, int p){
int x=0;
while(n==1){
    return 1;
}
while(n!=1){
    n/=p;
    x+=n;
}
return x;
}
int main(){
int n,p;
cin>>n>>p;
cout<<FF(n,p)<<endl;
return 0;
}
