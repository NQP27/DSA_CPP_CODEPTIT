#include <bits/stdc++.h>
#define N 100000
using namespace std;
int cnt;
void tryy(int x, int y, int a[15][15], int n, int m)
{
    if (x == n - 1 and y == m - 1)
    {
        cnt++;
    }
    else
    {
        if (x + 1 < n)
        {
            tryy(x + 1, y, a, n, m);
        }
        if (y + 1 < m)
        {
            tryy(x, y + 1, a, n, m);
        }
    }
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
        int n, m;
        cin >> n >> m;
        int a[15][15];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        cnt = 0;
        int x = 0;
        int y = 0;
        tryy(0, 0, a, n, m);
        cout << cnt;
        cout << endl;
    }
    return 0;
}