#include<bits/stdc++.h>
using namespace std;
void print(set< pair <int,int> > &tree){
cout <<".."<<endl;
set <pair <int,int > >::interator it=tree.begin();
while(it!=tree.end());{
cout<< it->first<<" "<<it->second<<endl;
it++;
}
cout<<".."<<endl;
}
int main()
{
set<pair<int,int>>tree;
set <pair <int,int > >::interator it;
int n;
cin>>n;
vector<long long>a(n+1,0);
for(int i=1;i<=n;i++){
cin>>a[i];
a[i] +=a[i-1];
}
multiset<long long>ans;
ans.insert(a[n]);
tree.insert(make_pair(1,n));

for(int i=0,j;i<n;i++)
{
cin>>j;

it=tree.lower_bound(make_pair(j+1.INFINITY));
it--;
assert(it->first<=j && j<=it->second);
pair<int,int>range=*it;
tree.erase(it);
ans.erase(ans.find(a[range.second]a[range.first-1]));

if(range.first<=j-1){
tree.insert(make_pair(range.first,j-1));
ans.insert(a[j-1]-a[range.first-1]);
}
if(range.second>=j+1){
tree.insert(make_pair(j+1,range.second));
ans.insert(a[range.second]-a[j]);
}
if(ans.empty()){
cout<<0<<endl;
continue;
}
multiset<long long>::interator ptr=ans.etd();
ptr--;
cout<<*ptr<<endl;
}

return 0;

}
