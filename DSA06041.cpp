#include <bits/stdc++.h>
#define N 100000
int a[N];
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
        multiset<int> s;
        set<int> s1;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            s1.insert(a[i]);
        }
        int max_freq = 0;
        int res = -1;
        for (auto x : s1)
        {
            if (s.count(x) > max_freq and s.count(x) > n / 2)
            {
                res = x;
            }
        }
        if (res == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
    return 0;
}