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
        ll n, a[N];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll dp[N];
        dp[0] = (a[0]);
        dp[1] = (max(a[0], a[1]));
        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        }
        cout << dp[n - 1] << "\n";
    }
    system("pause");
    return 0;
}