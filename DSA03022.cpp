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
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        long a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long n1 = 1;
        long n2 = 1;
        n1 = a[0] * a[1] * a[n - 1];
        n2 = a[n - 1] * a[n - 2] * a[n - 3];
        long x1 = 1;
        long x2 = 1;
        x1 = a[0] * a[1];
        x2 = a[n - 1] * a[n - 2];
        long res1 = n1 > n2 ? n1 : n2;
        long res2 = x1 > x2 ? x1 : x2;
        cout << (res1 > res2 ? res1 : res2);
    }
    return 0;
}