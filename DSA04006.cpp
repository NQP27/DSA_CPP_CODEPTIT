#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> c;

void center_pos(ll n)
{
    int j = 0;
    ll mu = 1;
    while (n / 2 > 0)
    {
        j++;
        if (j == 1)
        {
            mu = 2;
            c.push_back(mu);
        }
        else
        {
            mu *= 2;
            c.push_back(mu);
        }
        n /= 2;
    }
}

ll count(ll i, ll n, ll pos)
{
    if (i % 2 == 1)
    {
        return 1;
    }
    if (i < c[pos])
    {
        return count(i, n / 2, pos - 1);
    }
    else if (i == c[pos])
    {
        return n % 2;
    }
    else if (i > c[pos])
    {
        return count(2 * c[pos] - i, n / 2, pos - 1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    int t;
    cin >> t;
    while (t--)
    {
        c.clear();
        ll n, r, l;
        cin >> n >> r >> l;
        // cout << n << " " << r << " " << l;
        center_pos(n);
        // for (int i = 0; i < c.size(); i++)
        // {
        //     cout << c[i] << " ";
        // }
        // cout << endl;
        ll res = 0;
        for (ll i = r; i <= l; i++)
        {
            res += count(i, n, c.size() - 1);
        }
        cout << res << endl;
    }
    // system("pause");
    return 0;
}
