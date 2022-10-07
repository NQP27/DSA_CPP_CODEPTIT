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
        int n, k;
        cin >> n >> k;
        int a[N];
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        int i = k;
        while (i >= 0 and a[i] == n - k + i)
        {
            i--;
        }
        if (i >= 1)
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
            {
                a[j] = a[j - 1] + 1;
            }
        }
        else
        {
            for (int i = 0; i <= k; i++)
            {
                a[i] = i;
            }
        }
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}