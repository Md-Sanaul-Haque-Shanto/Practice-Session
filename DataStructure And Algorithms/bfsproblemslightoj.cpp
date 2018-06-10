#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 50000

int n;
int a[maxN+5],track[maxN+5];
vi adj[maxN+5];
bool vis[maxN+5];

void BFS(int st, int ed)
{
    for(int i=1;i<=50000;i++)
    {
        track[i] = i;
        vis[i] = false;
        sort(adj[i].begin(),adj[i].end());
    }

    queue<int> q;
    q.push(st);
    vis[st] = true;

    while(!q.empty())
    {
        int u = q.front();

        if(u == ed) return;
        q.pop();

        for(int i=0;i<(int)adj[u].size();i++)
        {
            int v = adj[u][i];

            if(!vis[v])
            {
                track[v] = u;
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

void printAns(int u)
{
    if(track[u] == u)
    {
        printf("%d",u);
        return;
    }
    printAns(track[u]);
    printf(" %d",u);
}

int main()
{

    int tcs;
    scanf(" %d ",&tcs);

    for(int t=1;t<=tcs;t++)
    {
        scanf(" %d ",&n);

         for(int i=1;i<=50000;i++) adj[i].clear();

         for(int i=1;i<=n;i++) scanf(" %d ",&a[i]);

         for(int i=2;i<=n;i++)
        {
            adj[a[i-1]].push_back( a[i] );
            adj[ a[i] ].push_back(a[i-1]);
        }

        BFS(a[1],a[n]);

        printf("Case %d:\n",t);
        printAns(a[n]);
        puts("");
    }

    return 0;
}
