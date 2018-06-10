#include <bits/stdc++.h>

using namespace std;

long long red[100100], black[100100], sup[100100];

int main ()
{
    freopen("in1", "r", stdin);
    //freopen("output1.txt", "w", stdout);

    long long tcase, n, k, q, i;

    cin >> tcase;

    while(tcase--)
    {
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            scanf("%lld", &red[i]);
        }

        for (i = 1; i <= n; i++)
        {
            scanf("%lld", &black[i]);
        }

        sort(red + 1, red + n + 1, greater<long long>());
        sort(black + 1, black + n + 1, greater<long long>());

        for (i = 1; i <= n; i++)
            sup[i] = red[i]*black[i];

//        for (i = 0; i < n; i++)
//            cout << sup[i] << " ";
//        cout << endl;
        cin >> q;

        while(q--)
        {
            scanf("%lld", &k);

            long long low = 1, up = n, mid, ans = 0;

            while (low <= up)
            {
                mid = (up + low)/2;

                if (sup[mid] >= k)
                {
                    ans = mid;
                    low = mid + 1;
                }
                else
                {
                    up = mid - 1;
                }
            }

            printf("%lld\n", ans);
        }
    }

    return 0;
}
