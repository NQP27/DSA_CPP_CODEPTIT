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
        int n;
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        int j = 0;
        while (j <= n - 1 - j)
        {
            if (j == n - 1 - j)
            {
                cout << a[j];
            }
            else
            {
                cout << a[n - 1 - j] << " " << a[j] << " ";
            }
            j++;
        }
        cout << endl;
    }
    return 0;
}