#include <bits/stdc++.h>
#define N 100000
#define ll long long
using namespace std;
ll M = 1e9 + 7;
ll power(ll a, ll k)
{
    if (k == 0)
    {
        return 1;
    }
    ll x = power(a, k / 2);
    if (k % 2 == 0)
    {
        return x % M * x % M;
    }
    else
    {
        return x % M * x % M * a % M;
    }
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
        string s;
        cin >> s;
        string x = s;
        ll n = stoll(x, nullptr, 10);
        reverse(s.begin(), s.end());
        ll k = stoll(s, nullptr, 10);
        if (n == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            ll res = power(n, k);
            cout << res%M << endl;
        }
    }
    //    system("pause");
    return 0;
}
