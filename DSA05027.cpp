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
        int n, m, w[N], v[N];
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> w[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int dp[n + 1][m + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (j >= w[i])
                {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
                }
            }
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= m; j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        cout << dp[n][m] << endl;
    }
    system("pause");
    return 0;
}