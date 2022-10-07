#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check(int a[N], int b[N], int n)
{
    int res = 1;
    int x = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        if ((a[i] == b[x] and a[n - i - 1] == b[n - x - 1]) or (a[i] == b[n - x - 1] and a[n - i - 1] == b[x]))
        {
            res = 1;
        }
        else
        {
            res = 0;
            return res;
        }
        x++;
    }
    return res;
}
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
        int a[N], b[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        if (check(a, b, n))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}