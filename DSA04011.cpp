#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long
ll transfer(string s)
{
    ll res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            res = res + pow(2, s.length() - i - 1);
        }
    }
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
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        // cout << s1 << " " << s2 << endl;
        ll a1, a2;
        a1 = transfer(s1);
        a2 = transfer(s2);
        cout << a1 * a2 << endl;
    }
    system("pause");
    return 0;
}