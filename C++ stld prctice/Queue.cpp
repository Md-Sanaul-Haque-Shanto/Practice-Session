#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>p;
    priority_queue<int>pq;
    int n=5;
    for(int i=0,k;i<n;i++)
    {
        cin>>k;
        p.push(k);
        pq.push(k);
    }
    cout<<"p :";
    while(!p.empty()){
        cout<<" "<<p.front();
        p.pop();
    }
    cout<<"\npq:";
    while(!pq.empty()){

        cout<<" "<<pq.top();
        pq.pop();

    }
    cout<<endl;

    return 0;
}
