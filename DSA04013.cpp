#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long

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
        int n, a[N];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = n;
        sort(a, a + n);
        for (int i = n / 2 - 1, j = n - 1; i >= 0 and j >= n / 2;)
        {
            if (a[i] * 2 <= a[j])
            {
                res--;
                j--;
                i--;
            }
            else
            {
                i--;
            }
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}