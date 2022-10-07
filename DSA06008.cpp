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
        int cnt = 0;
        int n, m;
        cin >> n >> m;
        multiset<int> ms;
        int a[N], b[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            ms.insert(b[i]);
        }
        sort(b, b + m);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt += 0;
            }
            else if (a[i] == 1)
            {
                cnt += ms.count(0);
            }
            else
            {
                int *indx = upper_bound(b, b + m, a[i]);
                cnt += (b + m) - indx;
                cnt += ms.count(0) + ms.count(1);
            }
            if (a[i] == 2)
            {
                cnt -= ms.count(3) + ms.count(4);
            }
            if (a[i] == 3)
            {
                cnt += ms.count(2);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}