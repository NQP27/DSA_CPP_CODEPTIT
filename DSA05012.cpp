#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int dp[1001][1001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
            if (i == j || j == 0)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = dp[i - 1][j - 1] % mod + dp[i - 1][j] % mod;
            }
            dp[i][j] %= mod;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
    system("pause");
    return 0;
}