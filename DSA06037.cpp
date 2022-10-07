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
        int n;
        cin >> n;
        set<long> m1; // min
        set<long> m2; // max
        long min[N];
        long max[N];
        long a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            m1.insert(a[i]);
            m2.insert(a[n - i - 1]);
            max[i] = *m1.rbegin();
            min[n - 1 - i] = *m2.begin();
        }
        int cnt = 0;
        int o = 0;
        int res[N];
        // for (int i = 1; i < n - 1; i++)
        // {
        //     cout << max[i] << " ";
        // }
        // cout << endl;
        // for (int i = 1; i < n - 1; i++)
        // {
        //     cout << min[i + 1] << " ";
        // }
        for (int i = 0; i < n - 1; i++)
        {
            if (max[i] <= min[i + 1])
            {
                cnt++;
                res[o] = i;
                o++;
            }
        }
        cout << cnt << endl;
        for (int i = 0; i < o; i++)
        {
            cout << res[i] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}