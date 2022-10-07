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
        long cnt = 0;
        int n;
        long q, a[N];
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            int j = i + 1;
            int k = n - 1;
            while (j < k)
            {
                long x = a[i] + a[j] + a[k];
                if (x >= q)
                {
                    k--;
                }
                else
                {
                    cnt += k - j;
                    j++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}