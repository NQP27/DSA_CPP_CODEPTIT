#include <bits/stdc++.h>
#define N 10000
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
        multiset<long long> s;
        int m, n;
        cin >> m >> n;
        long long a[N], b[N];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            s.insert(b[i]);
        }
        for (multiset<long long>::iterator it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}