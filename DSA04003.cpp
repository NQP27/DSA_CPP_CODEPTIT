#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll M = 123456789;
ll count(ll n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return count(n - 1) % M * 2;
    }
}
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
    while (t--)
    {
        ll n;
        cin >> n;
        cout << power(2, n - 1) % M << endl;
    }
    return 0;
}