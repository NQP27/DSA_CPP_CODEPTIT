#include <bits/stdc++.h>
#define N 10000
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
    int n, dp[N];
    for (int i = 0; i <= N; i++)
    {
        dp[i] = i;
    }
    for (int i = 1; i <= N; i++)
    {
        if (pow((int)sqrt(dp[i]), 2) == dp[i])
        {
            dp[i] = 1;
        }
        else
        {
            for (int j = 1; j < i; j++)
            {
                dp[i] = min(dp[i], dp[j] + dp[i - j]);
            }
        }
    }
    while (t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
    system("pause");
    return 0;
}