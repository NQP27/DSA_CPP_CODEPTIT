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
        int cnt = 0;
        int n, k;
        cin >> n >> k;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == k)
            {
                cnt++;
            }
        }
        if (cnt != 0)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}