#include <bits/stdc++.h>
#define N 100000
using namespace std;
long long M = 1e9 + 7;
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
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            long long x = (a[i] * i) % M;
            res = (res + x) % M;
        }
        cout << res << endl;
    }
    return 0;
}