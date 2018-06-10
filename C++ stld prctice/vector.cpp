#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>a;
 int n=10;
 for(int i=0;i<n;i++){

    a.push_back(i*i);

 }
    cout<<"Vector a:";
    for(int i=0;i<(int)a.size();i++)
    {
        cout<<a[i];
    }
    cout<<endl;

pair<int,int>p,q;
p=make_pair(3,9);
cout<<"Pair p:"<<p.first<<" "<<p.second<<endl;
q.first = p.first+1;
q.second = 16;
cout<<"Pair q :"<<q.first<<" "<<q.second<<endl;

cout<<"Vector Pa:";
vector<pair<int,int> >pa;
for(int i=0;i<n;i++){

    pair<int ,int>p;
    pa.push_back(make_pair(i,i*i));

}
for(int i=0;i<(int)pa.size();i++)
{
    cout<<pa[i].first<<" "<<pa[i].second<<endl;
}
}
