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
        int n;
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> dp(n + 1, 1);
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            int tmp = 0;
            for (int j = 0; j < i; j++)
            {
                if (a[j] <= a[i])
                {
                    tmp = max(tmp, dp[j]);
                }
            }
            dp[i] += tmp;
            res = max(res, dp[i]);
        }
        cout << n - res << endl;
    }
    system("pause");
    return 0;
}