#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

// Macro
#define eps 1e-9
#define pi acos(-1.0)
#define ff first
#define ss second
#define re return
#define QI queue<int>
#define SI stack<int>
#define SZ(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sq(a) ((a)*(a))
#define distance(a,b) (sq(a.x-b.x) + sq(a.y-b.y))
#define iseq(a,b) (fabs(a-b)<eps)
#define eq(a,b) iseq(a,b)
#define ms(a,b) memset((a),(b),sizeof(a))
#define G() getchar()
#define MAX3(a,b,c) max(a,max(b,c))
#define II ( { int a ; read(a) ; a; } )
#define LL ( { Long a ; read(a) ; a; } )
#define DD ({double a; scanf("%lf", &a); a;})
template<class T>inline bool read(T &x){int c=getchar();int sgn=1;while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; x*=sgn; return ~c;}
double const EPS=3e-8;
const int NX = 1e6 ;

int dp[2][ NX ] , n , inp[NX] , parnt[NX];
vector < int > adj[ NX ];

void ini()
{
    for( int i = 0 ; i <= n + 1 ; i++ )
    {
        adj[i].clear();
        dp[0][i] = dp[1][i] = 0;
        parnt[i] = -1 ;
    }
}
void dfs( int x )
{
    int sz = adj[x].size();
    dp[0][x] = max( 0 , inp[x] ) ;
    for( int i = 0 ; i < sz ; i++ )
    {
        int u = adj[x][i];
        dfs(u);
        dp[0][x] += max( 0 , dp[1][u] ); // from his grand child
        dp[1][x] += max( 0 , max( dp[1][u] , dp[0][u] ) );


    }

}

int main()
{
   // I will always use scanf and printf
   // May be i won't be a good programmer but i will be a good human being
    while( scanf("%d",&n) == 1 )
    {
        ini();
        for( int i = 1 ; i <= n ; i++ ) inp[i] = II ;
        int x , y ;
        while( scanf("%d %d",&x,&y) == 2 )
        {
            if( x == 0 && y == 0 ) break ;
            adj[y].pb(x);
            parnt[x] = y ;
        }
        int root ;
        int ans = 0 ;
        for( int i = 1 ; i <= n ; i++ )
        {
            if( parnt[i] == -1 )
            {
                dfs( i );
                ans += max( dp[0][i] , dp[1][i] );
            }
        }
        printf("%d\n",ans);



    }

    return 0;
}
