#include <bits/stdc++.h>
#define N 100000
using namespace std;
void binarySearch(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] < x)
        {
            l = m + 1;
        }
        else if (a[m] > x)
        {
            r = m - 1;
        }
        else
        {
            cout << m + 1 << endl;
            return;
        }
    }
    cout << "NO\n";
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
        int n, x, a[N];
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        binarySearch(a, 0, n - 1, x);
    }
    return 0;
}