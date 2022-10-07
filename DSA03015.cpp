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
        int n, s, m;
        cin >> n >> s >> m;
        if (n < m)
        {
            cout << -1;
        }
        else if (n * 6 - m * 6 < m)
        {
            cout << -1;
        }
        else
        {
            int d = m * s / n;
            if ((m * s) % n != 0)
            {
                d++;
            }
            cout << d;
        }
        cout << endl;
    }
    return 0;
}