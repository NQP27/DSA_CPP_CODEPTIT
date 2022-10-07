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
        set<int> s;
        int n, k;
        cin >> n >> k;
        int a[N];
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int i = k;
        while (i >= 1 and a[i] == n - k + i)
        {
            i--;
        }
        if (i == 0)
        {
            cout << k << endl;
        }
        else
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
            {
                a[j] = a[j - 1] + 1;
            }
            int cnt = 0;
            for (int i = 1; i <= k; i++)
            {
                if (s.count(a[i]) == 0)
                {
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}