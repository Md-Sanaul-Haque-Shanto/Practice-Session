#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
for(int i=1;i<=t;i++){
    int n,x,sum=0;cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    cout<<"Case "<<i<<": "<<sum-(n-1)<<endl;
}

}
