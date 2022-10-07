#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
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
        long long a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long n1 = 0;
        long long n2 = 0;
        int m = min(k, n - k);
        for (int i = 0; i < m; i += 1)
        {
            n1 += a[i];
        }
        for (int i = m; i < n; i += 1)
        {
            n2 += a[i];
        }
        cout << n2 - n1 << endl;
    }
    return 0;
}