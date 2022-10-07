#include <bits/stdc++.h>
#define N 100000
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
        map<long long, int> mp;
        long res = 0;
        int n;
        long long q, a[N];
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (q - a[i] == a[i])
            {
                res += mp[a[i]] - 1;
            }
            else
            {
                res += mp[q - a[i]];
            }
        }
        cout << res / 2 << endl;
    }
    return 0;
}