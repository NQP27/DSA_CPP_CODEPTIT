#include <bits/stdc++.h>
#define N 100000
// int a[N];
// int sum[N];
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
        int sum[N];
        int a[N];
        sum[0] = 0;
        int n;
        cin >> n;
        int res = -2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
            {
                sum[i] = a[i];
            }
            else
            {
                sum[i] = sum[i - 1] + a[i];
            }
        }
        int left, right;
        for (int i = 0; i < n; i++)
        {
            // cout << sum[i] << " ";
            if (i == 0)
            {
                left = 0;
                right = sum[n - 1] - sum[0];
            }
            else if (i == n - 1)
            {
                right = 0;
                left = sum[n - 2];
            }
            else
            {
                left = sum[i - 1];
                right = sum[n - 1] - sum[i];
            }
            if (left == right)
            {
                res = i;
                break;
            }
        }
        cout << res + 1 << endl;
    }
    return 0;
}