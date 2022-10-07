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
        vector<int> v;
        int n;
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            v.push_back(a[i] - a[i - 1]);
            sum += a[i] - a[i - 1];
        }
        // cout << sum << endl;
        int res = n - 1;
        int l = 0;
        int r = v.size() - 1;
        while (l < r and sum <= 0)
        {
            int x = v[l] < v[r] ? v[l] : v[r];
            res--;
            sum -= x;
            if (sum <= 0)
            {
                if (x == v[l])
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        if (l >= r)
        {
            cout << -1;
        }
        else
        {
            // cout << res << endl;
        }
    }
    return 0;
}