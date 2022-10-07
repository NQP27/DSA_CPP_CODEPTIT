#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll unsigned long long
ll dp[150][150];
ll cal(ll dp[105][105], int i)
{
    ll res = 0;
    for (int j = 0; j < i; j++)
    {
        res += dp[j][i - j - 1];
    }
    if (i % 2 == 1 and i >= 5)
    {
        res += dp[i / 2][i / 2];
    }
    // cout << res << " ";
    return res;
}
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
    ll dp[105][105];
    dp[0][0] = dp[1][0] = dp[0][1] = dp[1][1] = 1;
    for (int i = 2; i <= 100; i++)
    {
        dp[i][i] = cal(dp, i);
        for (int j = 0; j <= i; j++)
        {
            dp[j][i - j] = dp[j][j] * dp[i - j][i - j];
        }
    }
    while (t--)
    {
        int n;
        cin >> n;
        // cout << dp[n][n] << endl;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
    }
    system("pause");
    return 0;
}