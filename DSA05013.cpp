#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long
ll M = 1e9 + 7;
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
        int n, k;
        cin >> n >> k;
        ll dp[N+5];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        ll tmp = 0;
        for (int i = 1; i <= k; i++)
        {
            dp[i] = (tmp % M + dp[0] % M) % M;
            tmp += dp[i] % M;
        }
        for (int i = k + 1; i <= n; i++)
        {
            for (int j = i - k; j < i; j++)
            {
                dp[i] = (dp[i] % M + dp[j] % M) % M;
            }
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << dp[i] << " ";
        // }
        // cout << endl;
        cout << dp[n] << endl;
    }
    system("pause");
    return 0;
}