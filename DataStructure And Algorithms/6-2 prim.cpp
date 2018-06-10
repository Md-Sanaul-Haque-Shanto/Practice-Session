#include<bits/stdc++.h>
using namespace std;
#define INF 10e9
typedef pair<int,int>PII;
vector<PII>v[100];
struct Node{
 int u,cost;
 Node(){ }
 Node(int _u,int _cost){

 u=_u;
 cost= _cost;
 }
};

bool operator<(Node A,Node B){
return A.cost>B.cost;
}
priority_queue<Node>PQ;
int cost[100],n;
int taken[100];
int prim(){
for(int i=0;i<n;i++){

    cost[i]=INF,taken[i]=0;
    cost[s]=0;
    PQ.push(Node(s,0));
    int ans=0;
    while(!PQ.empty()){
        Node x=PQ.pop();
        PQ.pop();
        if(taken[x.u]){
            continue;
        }
        taken[x.u]=1;
        ans+=x.cost;
        for(PII v: v[x.u]){

            if(taken[v.first]) continue;
            if(v.second<cost[v.firdt]){
                PQ.push(Node(v.first,v.second));
                cost[v.first]=v.second;
            }
        }

    }

}

cout<<"Cost Of MST: "<<ans<<endl;
}

int main(){
prim();
return 0;
}
