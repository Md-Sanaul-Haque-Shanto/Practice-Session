#include <bits/stdc++.h>

using namespace std;
#define Size(x) ((int)(x).size())
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef pair<int,int>pii;
const int INF = 1e9 + 10;

int main()
{
	ios_base :: sync_with_stdio(false) ,cin.tie(0) , cout.tie(0);
	int n;
	cin >> n;
	if(n == 1) cout << -1 << endl;
	else cout << n << ' ' << n+1 << ' ' << n*(n+1) << endl;
	return 0;
}
