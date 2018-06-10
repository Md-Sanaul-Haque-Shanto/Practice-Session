#include<bits/stdc++.h>
using namespace std;
typedef pair<int , int>PII;

vector<PII>v;
bool cmp(PII A, PII B){
return A.second*B.first >A.first * B.second;
}
void fractional_knapsack(){
int n,w;
cin>>n;
for(int i=0;i<n;i++){

    int weight,price;
    cin>>weight>>price;
    v.push_back(PII(weight,price));
}
sort(v.begin(),v.end());
cin>>w;
int ans=0;
for(int i=0;i<n;i++){
    int z=min(w,v[i].first);
    w-=z;
    ans+=z*v[i].second;
}
cout<<"Maximum Cost : "<<ans<<endl;
}
int main(){
/*int n,w,weight,price;
cin>>n;
cin>>weight>>price;
cin>>w;*/
fractional_knapsack();

return 0;

}
