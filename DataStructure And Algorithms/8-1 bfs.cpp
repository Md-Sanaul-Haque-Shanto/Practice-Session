#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int vis[100];
void bfs(int s,int n){
for(int i=0;i<n;i++) vis[i]=0;
    queue<int>Q;
    Q.push(s);
    vis[s]=1;
    while(!Q.empty()){
        int u=Q.front();
Q.pop();
for(int i=0;i<adj[u].size();i++)
   if(vis[adj[u][i]]==0)
   {
       int v=adj[u][i];
       vis[v]=1;Q.push(v);
   }
    }
}
int main(){
  freopen("in1","r",stdin);
    int n,s;
    cin>>n;
    cin>>s;
bfs(s,n);
puts(" ");
}
