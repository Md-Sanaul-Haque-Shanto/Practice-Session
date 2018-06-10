

#include <bits/stdc++.h>
using namespace std;

inline long long lcm(long long &a, long long &b)
{
    return ((a) / __gcd(a, b))*b;
}

int main()
{
    ios::sync_with_stdio(false);

    long long m[100], n, T, val;

    cin >> T;

    while(T--) {
        cin >> n;

        long long res = 0;
        for(int i = 0; i < n; i++)
            cin >> m[i];

        cin >> val;

        for(int i = 0; i < n; i++)
            res += val/m[i];


        for(int i = 0; i < n-1; i++) {
            for(int j = i + 1; j < n; j++) {
                res -= val/lcm(m[i], m[j]);
            }
        }

        cout << res << endl;
    }
}
