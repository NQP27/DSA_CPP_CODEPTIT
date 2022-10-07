#include <bits/stdc++.h>
using namespace std;
int gm(string s)
{
    if (s[0] == '0')
    {
        return 0;
    }
    int dp[10000] = {0};
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= s.length(); i++)
    {
        if (s[i - 1] > '0')
        {
            dp[i] = dp[i - 1];
        }
        if (s[i - 2] == '1' || s[i - 2] == '2' && s[i - 1] <= '6')
        {
            dp[i] += dp[i - 2];
        }
    }
    return dp[s.length()];
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
    while (t--)
    {
        string s;
        cin >> s;
        cout << gm(s) << endl;
    }
    return 0;
}