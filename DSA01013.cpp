#include <bits/stdc++.h>
#define N 100000
int check;
using namespace std;
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
        while (cin >> s)
        {
            string res = "";
            res += s[0];
            for (int i = 1; i < s.length(); i++)
            {
                if (s[i] == '0')
                {
                    res += res[i - 1] == '1' ? '1' : '0';
                }
                else
                {
                    res += res[i - 1] == '1' ? '0' : '1';
                }
            }
            cout << res << endl;
        }
    }
    return 0;
}