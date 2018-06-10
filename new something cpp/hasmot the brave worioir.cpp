#include<bits/stdc++.h>

using namespace std;

#define FI           freopen("in.txt","r",stdin)
#define FO           freopen("out.txt","w",stdout)

#define MS(x,v)      memset(&x,v,sizeof(x))
#define CL(x)        memset(&x,0,sizeof(x))
#define mp           make_pair
#define pb           push_back
#define ss           second
#define fi           first

#define vanish       scanf("\n")
#define nl           puts("")
#define endl         '\n'
#define i64          long long
#define all(x)       x.begin(),x.end()

#define Iterate(s)   for(typeof(s.begin()) it = s.begin(); it != s.end(); it++)
#define FOR(i,k,n)   for(__typeof(n) i = (k); i <= (n); ++i)
#define For(i,k,n)   for(__typeof(n) i = (k); i < (n); ++i)
#define ROF(i,k,n)   for(__typeof(n) i = k; i >= n; i--)
#define REP(i,n)     for(__typeof(n) i = 0; i < (n); ++i)
#define sq(x)        ((x)*(x))

#define PI           acos(-1.0)
#define EPS          0.0000001
#define MOD          1000000007

#define oo           100000000000000LL
#define MAX          100005


int main(){

   //just md sanaul haque shnto//

    long double n,m;
    while( scanf("%Lf %Lf",&n,&m) == 2 ){

        if( n>m ) n = n-m;
        else n = m-n;

        printf("%.0LF\n",n);

    }
    return 0;
}
