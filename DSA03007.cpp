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
        int n;
        cin >> n;
        unsigned long long a[N], b[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        unsigned long long p = 0;
        for (int i = 0; i < n; i++)
        {
            p += a[i] * b[i];
        }
        cout << p << endl;
    }
    return 0;
}