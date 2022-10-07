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
        int n, a[N];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> dp(a, a + n);
        int res = a[0];
        for (int i = 0; i < n; i++)
        {
            int tmp = dp[i];
            for (int j = 0; j < i; j++)
            {
                if (a[j] < a[i])
                {
                    dp[i] = max(dp[i], tmp + dp[j]);
                }
            }
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}