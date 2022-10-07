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
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long n1 = 0;
        long long n2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            n1 = n1 * 10 + a[i];
        }
        for (int i = 1; i < n; i += 2)
        {
            n2 = n2 * 10 + a[i];
        }
        cout << n1 + n2 << endl;
    }
    return 0;
}