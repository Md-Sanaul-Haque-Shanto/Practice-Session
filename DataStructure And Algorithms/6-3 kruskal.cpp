#include<bits/stdc++.h>
using namespace std;
struct Edge{
int u,v,w;
};
bool operator<(Edge A, Edge B){
return A.w<B.w;
}
vector<Edge>E;
int p[100];
int find(int x){
if(p[x]==x) return x;
return p[x]= find(p[x]);
}
int kruskal(){
sort(E.begin(),E.end());
int sz=E.size();
int ans=0;
for(int i=0;i<sz;i++){

    if(find(E[i].u)!=find(E[i].v)){
        p[p[E[i].u]]=p[E[i].v];
        ans+=E[i].w;
    }

}

cout<<"Cost Of MST : "<<ans<<endl;
}
int main(){

    kruskal();
return 0;
}
