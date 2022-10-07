#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int a[N], n, S;
        cin >> n >> S;
        int dp[N];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = S; j >= a[i]; j--)
            {
                if (dp[j - a[i]] == 1)
                {
                    dp[j] = 1;
                }
            }
        }

        if (dp[S])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}