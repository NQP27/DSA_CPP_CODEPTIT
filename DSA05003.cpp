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
        int m, n, p;
        cin >> m >> n >> p;
        cin.ignore();
        string a, b, c;
        cin >> a >> b >> c;
        int dp[101][101][101];
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                for (int l = 0; l <= p; l++)
                {
                    if (i == 0 or j == 0 or l == 0)
                    {
                        dp[i][j][l] = 0;
                    }
                    else
                    {
                        if (a[i - 1] == b[j - 1] and a[i - 1] == c[l - 1])
                        {
                            dp[i][j][l] = dp[i - 1][j - 1][l - 1] + 1;
                        }
                        else
                        {
                            dp[i][j][l] = max(dp[i - 1][j][l], max(dp[i][j][l - 1], dp[i][j - 1][l]));
                        }
                    }
                }
            }
        }
        cout << dp[m][n][p] << endl;
    }
    system("pause");
    return 0;
}