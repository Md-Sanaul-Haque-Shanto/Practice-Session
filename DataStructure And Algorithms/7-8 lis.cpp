#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>V;
int n,m;
cin>>n;
for(int i=0;i<n;i++){
    cin>>m;
   // v.push_back(m);
    vector<int>::iterator v = lower_bound(V.begin(),V.end(),m);
    if(V.end()==v) V.push_back(m);
    else v[v-V.begin()] =m;

}
cout<<"Lis : "<<V.size()<<endl;
}
