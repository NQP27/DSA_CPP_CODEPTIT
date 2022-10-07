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
        long a[N], b[N];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        int first = 0;
        int last = n - 1;
        int i = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << b[i] << " ";
        // }
        while (a[i] == b[i])
        {
            first++;
            i++;
        }
        i = n - 1;
        while (a[i] == b[i])
        {
            last--;
            i--;
        }
        cout << first + 1 << " " << last + 1;
        cout << endl;
    }
    return 0;
}