#include <bits/stdc++.h>
#define N 100000
#define ll long long
using namespace std;
char c[30] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y', 'Z'};
ll M = 1e9 + 7;
ll p[N];
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
        ll n, k;
        cin >> n >> k;
        ll res = n;
        p[1] = 2;
        for (int i = 2; i <= n; i++)
        {
            p[i] = p[i - 1] * 2;
        }
        ll pos = k < abs(k - p[res] / 2) ? k : abs(k - p[res] / 2);
        while (pos != p[res] / 2)
        {
            if (pos == 0)
            {
                break;
            }
            else
            {
                res--;
                pos = pos < abs(pos - p[res] / 2) ? pos : abs(pos - p[res] / 2);
            }
        }
        cout << c[res - 1] << endl;
    }
    return 0;
}