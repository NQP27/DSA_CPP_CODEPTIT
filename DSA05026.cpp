#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long
int dp[105][25005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    while (t--)
    {
        int m, n, w[N];
        cin >> m >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> w[i];
        }
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (j >= w[i])
                {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + w[i]);
                }
            }
        }
        cout << dp[n][m];
    }
    system("pause");
    return 0;
}